#include "stdafx.h"
#include "CppUnitTest.h"

#include "..\Lab9\Lab9.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(DivideByZero)
		{
			bool exceptionThrown = false;
			string expectedMessage = "a may not be 0";
			string actualMessage;

			try
			{
				double r1;
				double r2;
				quadEquation(0, 0, 0, r1, r2);
			}
			catch (DivideByZeroException & e)
			{
				exceptionThrown = true;
				actualMessage = e.what();
			}

			Assert::IsTrue(exceptionThrown);
			Assert::AreEqual(expectedMessage, actualMessage);
		}

		TEST_METHOD(NegativeSquareRoot)
		{
			bool exceptionThrown = false;
			string expectedMessage = "b^2 - 4ac may not be negative";
			string actualMessage;

			try
			{
				double r1;
				double r2;
				quadEquation(1, 0, 1, r1, r2);
			}
			catch (SquareRootOfANegative & e)
			{
				exceptionThrown = true;
				actualMessage = e.what();
			}

			Assert::IsTrue(exceptionThrown);
			Assert::AreEqual(expectedMessage, actualMessage);
		}

		TEST_METHOD(MatchingRoots)
		{
			bool exceptionThrown = false;
			string expectedMessage = "-0.666667";
			string actualMessage;

			try
			{
				double r1;
				double r2;
				quadEquation(9, 12, 4, r1, r2);
			}
			catch (SingleRoot & e)
			{
				exceptionThrown = true;
				actualMessage = e.what();
			}

			Assert::IsTrue(exceptionThrown);
			Assert::AreEqual(expectedMessage, actualMessage);
		}

		TEST_METHOD(GetsRoots)
		{
			double r1;
			double r2;
			quadEquation(3,-1, -2, r1, r2);
			double roundedActual = round(r2 * 1000000.0) / 1000000.0;
			
			Assert::AreEqual(1.0, r1);
			Assert::AreEqual(-0.666667, roundedActual);
		}

	};
}