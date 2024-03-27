#include "pch.h"
#include "CppUnitTest.h"
#include "/A_univer/OOP/Code/Lab_3/Lab_3.3_A/MoneyOpen.h"
#include "/A_univer/OOP/Code/Lab_3/Lab_3.3_A/Money.h"
#include "/A_univer/OOP/Code/Lab_3/Lab_3.3_A/MoneyOpen.cpp"
#include "/A_univer/OOP/Code/Lab_3/Lab_3.3_A/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			MoneyOpen m(2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
			m++;
			Assert::AreEqual(2618.96, m.CalculateTotal());
		}
	};
}
