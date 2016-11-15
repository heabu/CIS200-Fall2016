#include "stdafx.h"
#include "CppUnitTest.h"

#include "..\Lab7\RightTriangle.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(CatchException)
		{
			bool exceptionThrown = false;
			string expectedMessage = "invalid side length";
			string actualMessage;
			
			try
			{
				RightTriangle tri;
				tri.set(0, 3);
				tri.set(1, 4);
				tri.set(2, 2);
			}
			catch (runtime_error& e)
			{
				exceptionThrown = true;
				actualMessage = e.what();
			}

			Assert::IsTrue(exceptionThrown);
			Assert::AreEqual(expectedMessage, actualMessage);
		}

		TEST_METHOD(ExceptionExpected)
		{
				RightTriangle tri;
				tri.set(0, 3);
				tri.set(1, 4);
				
			
				Assert::ExpectException<runtime_error>([&] {tri.set(2, 2); });
		}

	};
}