#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Classes\Circle.h"
#include "..\Classes\Cylinder.h"
#include <math.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestSetGetRadius)
		{
			Circle firstCircle;
			firstCircle.setRadius(10);
			Assert::AreEqual(10.0, firstCircle.getRadius());
		}

		TEST_METHOD(TestArea)
		{
			Circle firstCircle;
			firstCircle.setRadius(10);
			Assert::AreEqual((10.0*10.0*3.14159), firstCircle.area());
		}

		TEST_METHOD(TestVolume)
		{
			Circle firstCircle;
			firstCircle.setRadius(10);
			Assert::AreEqual((4.0/3.0*1000.0*3.14159), firstCircle.getVolume());
		}

		TEST_METHOD(TestCylinderVolume)
		{
			Cylinder cylinder;
			cylinder.setHeight(10);
			cylinder.setRadius(10);
			double expectedVolume = round(cylinder.getHeight() * cylinder.getRadius() * cylinder.getRadius() * cylinder.PI);
			double actualVolume = round(cylinder.getVolume());
			Assert::AreEqual(expectedVolume, actualVolume);
		}

		TEST_METHOD(TestCylinderArea)
		{
			Cylinder cylinder;
			cylinder.setHeight(10);
			cylinder.setRadius(10);
			Assert::AreEqual((2 * cylinder.PI * cylinder.getRadius() * cylinder.getHeight()) + (2 * cylinder.getRadius() * cylinder.getRadius() * cylinder.PI), cylinder.area());
		}

		TEST_METHOD(TestCylinderHeight)
		{
			Cylinder cylinder;
			cylinder.setHeight(10);
			Assert::AreEqual(10, cylinder.getHeight());
		}
	};
}