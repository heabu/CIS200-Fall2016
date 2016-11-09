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
		
		TEST_METHOD(MaxfuncInts)
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

		TEST_METHOD(MaxfuncDoubles)
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

		TEST_METHOD(MaxfuncStrings)
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

		TEST_METHOD(BFloat)
		{
			B<float> b;
			b.setValuea(1.34f);
			b.setValueb(3.14f);
			Assert::AreEqual(1.34f, b.getValuea());
			Assert::AreEqual(3.14f, b.getValueb());
		}

		TEST_METHOD(BInt)
		{
			B<int> b;
			b.setValuea(1);
			b.setValueb(3);
			Assert::AreEqual(1, b.getValuea());
			Assert::AreEqual(3, b.getValueb());
		}

		TEST_METHOD(BChar)
		{
			B<char> b;
			b.setValuea('a');
			b.setValueb('c');
			Assert::AreEqual('a', b.getValuea());
			Assert::AreEqual('c', b.getValueb());
		}

		TEST_METHOD(BString)
		{
			B<string> b;
			b.setValuea("good");
			b.setValueb("morning");
			string good = "good";
			string morning = "morning";
			Assert::AreEqual(good, b.getValuea());
			Assert::AreEqual(morning, b.getValueb());
		}

		TEST_METHOD(BDateStruct)
		{
			B<Date> fifthB;
			
			Date first;
			first.day = 27;
			first.month = 10;
			first.year = 2014;

			Date second;
			second.day = 2;
			second.month = 11;
			second.year = 2014;
			
			fifthB.setValuea(first);
			fifthB.setValueb(second);
			
			Assert::AreEqual( 27, fifthB.getValuea().day);
			Assert::AreEqual( 10, fifthB.getValuea().month);
			Assert::AreEqual( 2014, fifthB.getValuea().year);

			Assert::AreEqual(2, fifthB.getValueb().day);
			Assert::AreEqual(11, fifthB.getValueb().month);
			Assert::AreEqual(2014, fifthB.getValueb().year);
			
		}
		
	};
}