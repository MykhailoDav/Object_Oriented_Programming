#include "pch.h"
#include "CppUnitTest.h"
#include "/A_univer/OOP/Code/Lab_2/Lab_2.3_c++/Money.h"
#include "/A_univer/OOP/Code/Lab_2/Lab_2.3_c++/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money m(2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
			m++;
			Assert::AreEqual(2618.96,m.CalculateTotal());

		}
	};
}
