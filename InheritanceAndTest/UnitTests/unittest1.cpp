#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\InheritanceAndTest\GenericItem.hpp"
#include "..\InheritanceAndTest\ProduceItem.hpp"
#include <assert.h>

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

	};
}