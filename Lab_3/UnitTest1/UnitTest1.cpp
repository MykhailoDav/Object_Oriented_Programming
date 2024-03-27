#include "pch.h"
#include "CppUnitTest.h"
#include "/A_univer/OOP/Code/Lab_3/Lab_3.1/Triangle.h"
#include "/A_univer/OOP/Code/Lab_3/Lab_3.1/Triangle.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle t(1, 5, 8);
			Assert::AreEqual(14., t.perimeter());
		}
	};
}
