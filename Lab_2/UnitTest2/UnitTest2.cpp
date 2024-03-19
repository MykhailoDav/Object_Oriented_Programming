#include "pch.h"
#include "CppUnitTest.h"
#include"/A_univer/OOP/Code/Lab_2/Lab_2.2_c++/Double.h"
#include"/A_univer/OOP/Code/Lab_2/Lab_2.2_c++/Double.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Double x(5);
			--x;
			Assert::AreEqual(4.,x.GetX());
		}
	};
}
