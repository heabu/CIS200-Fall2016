#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\InheritanceAndTest\GenericItem.hpp"
#include "..\InheritanceAndTest\ProduceItem.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(GenericItemSetAndGet)
		{
			GenericItem *Cheeze_Its = new GenericItem();
			Cheeze_Its->SetName("Cheese-Its");
			Cheeze_Its->SetQuantity(20);
			string name = "Cheese-Its";
			Assert::AreEqual(name, Cheeze_Its->GetName());
			Assert::AreEqual(20, Cheeze_Its->GetQuantity());
		}

		TEST_METHOD(ProduceItemExpirationDate)
		{
			string name = "Banana";
			string expiration = "11/15/2016";
			ProduceItem* bananas = new ProduceItem(name, 10, expiration);

			Assert::AreEqual(name, bananas->GetName());
			Assert::AreEqual(10, bananas->GetQuantity());
			Assert::AreEqual(expiration, bananas->GetExpiration());
		}

	};
}