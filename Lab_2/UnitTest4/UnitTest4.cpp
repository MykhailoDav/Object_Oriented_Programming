#include "pch.h"
#include "CppUnitTest.h"
#include"/A_univer/OOP/Code/Lab_2/Lab_2.4_c++/Matrix.h"
#include"/A_univer/OOP/Code/Lab_2/Lab_2.4_c++/Matrix.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Matrix m1(2);
			Matrix m2(2);
			Assert::IsTrue(m1==m2);
		}
	};
}
