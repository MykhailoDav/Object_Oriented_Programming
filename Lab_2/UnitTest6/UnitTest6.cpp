#include "pch.h"
#include "CppUnitTest.h"
#include "/A_univer/OOP/Code/Lab_2/Lab_2.6_c++/Equilateral.h"
#include "/A_univer/OOP/Code/Lab_2/Lab_2.6_c++/Equilateral.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6
{
	TEST_CLASS(UnitTest6)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Equilateral e(5);
			double ex = e.getArea();
			Assert::AreEqual(0., ex);
		}
	};
}
