#include "pch.h"
#include "CppUnitTest.h"
#include "/A_univer/OOP/Code/Lab_2/Lab_2.5_c++/Triangle.h"
#include "/A_univer/OOP/Code/Lab_2/Lab_2.5_c++/Triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle t(1, 5, 8);
			Assert::AreEqual(14.,t.perimeter());
		}
	};
}
