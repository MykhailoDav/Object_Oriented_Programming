#include "pch.h"
#include "CppUnitTest.h"
#include "/A_univer/OOP/Code/Lab_3/Lab_3.2/Point.h"
#include "/A_univer/OOP/Code/Lab_3/Lab_3.2/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Point p(1, 8);
			Assert::AreEqual(8., p.getY());
		}
	};
}
