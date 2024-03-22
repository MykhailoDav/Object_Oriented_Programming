#include "pch.h"
#include "CppUnitTest.h"
#include "/A_univer/OOP/Code/Lab_2/Lab_2.8_c++/Bill.h"
#include "/A_univer/OOP/Code/Lab_2/Lab_2.8_c++/Bill.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest8
{
	TEST_CLASS(UnitTest8)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Bill::Time t(0, 1, 50);
			unsigned e = 110;
			Assert::AreEqual(e, t.ToSeconds());
		}
	};
}
