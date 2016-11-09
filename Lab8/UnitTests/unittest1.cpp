#include "stdafx.h"
#include <string>

#include "CppUnitTest.h"
#include "..\Lab8\Lab8.h"
#include "..\Lab8\A.h"
#include "..\Lab8\B.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMaxfuncInts)
		{
			const int size = 5;
			int ints[size];
			ints[0] = 4;
			ints[1] = 1;
			ints[2] = 13;
			ints[3] = 3;
			ints[4] = 2;
			Assert::AreEqual(13, maxfunc<int>(ints, size) );
		}

		TEST_METHOD(TestMaxfuncDoubles)
		{
			const int size = 5;
			double doubles[size];
			doubles[0] = 1.1;
			doubles[1] = 4.1;
			doubles[2] = 8.1;
			doubles[3] = 5.2;
			doubles[4] = 2.3;
			Assert::AreEqual(8.1, maxfunc<double>(doubles, size));
		}

		TEST_METHOD(TestMaxfuncStrings)
		{
			const int size = 5;
			string strings[size];
			strings[0] = "student";
			strings[1] = "is";
			strings[2] = "in";
			strings[3] = "the";
			strings[4] = "class";
			string expectedValue = "the";
			Assert::AreEqual(expectedValue, maxfunc<string>(strings, size));
		}

		TEST_METHOD(TestA)
		{
			A<int> intA;
			intA.setValuea(10);
			Assert::AreEqual(10, intA.getValuea());
		}

		TEST_METHOD(TestB)
		{
			B<int> intB;
			intB.setValueb(10);
			Assert::AreEqual(10, intB.getValueb());
		}

		TEST_METHOD(TestBAccessingA)
		{
			B<int> intB;
			intB.setValueb(10);
			intB.setValuea(20);
			Assert::AreEqual(20, intB.getValuea());
		}

		TEST_METHOD(TestingDateStruct)
		{
			B<Date> fifthB;
			
			Date today;
			today.day = 8;
			today.month = 11;
			today.year = 2016;

			Date yesterday;
			today.day = 7;
			today.month = 11;
			today.year = 2016;
			
			fifthB.setValuea(today);
			fifthB.setValueb(yesterday);
			
			Assert::AreEqual( 8, fifthB.getValuea().day);
			Assert::AreEqual( 11, fifthB.getValuea().month);
			Assert::AreEqual( 2016, fifthB.getValuea().year);

			Assert::AreEqual(7, fifthB.getValueb().day);
			Assert::AreEqual(11, fifthB.getValueb().month);
			Assert::AreEqual(2016, fifthB.getValueb().year);
			
		}
		
	};
}