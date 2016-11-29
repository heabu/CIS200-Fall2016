#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Lab11\Stack.h"

#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace std;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Ints)
		{
			Stack<int> ints;
			for (int number = 1; number <= 10; number++)
			{
				ints.push(number);
			}
			Assert::AreEqual(10, ints.size());
			for (int expected = 10; expected > 1; expected--)
			{
				Assert::AreEqual(expected, ints.top());
				ints.pop();
			}
		}

		TEST_METHOD(Strings)
		{
			Stack<string> strings;
			string cat = "cat";
			string dog = "dog";
			string frog = "frog";
			string fish = "fish";
			strings.push(cat);
			strings.push(dog);
			strings.push(frog);
			strings.push(fish);
			Assert::AreEqual(4, strings.size());
			Assert::AreEqual(fish, strings.top());
			strings.pop();
			Assert::AreEqual(frog, strings.top());
			strings.pop();
			Assert::AreEqual(dog, strings.top());
			strings.pop();
			Assert::AreEqual(cat, strings.top());
			strings.pop();

		}

		TEST_METHOD(TenAsBinaryQueue)
		{
			BinaryQueue binary(10);
			string expected = "1010";
			Assert::AreEqual(expected, binary.toString());
		}

		TEST_METHOD(TenAsBinaryStack)
		{
			BinaryStack binary(10);
			string expected = "1010";
			Assert::AreEqual(expected, binary.toString());
		}

	};
}