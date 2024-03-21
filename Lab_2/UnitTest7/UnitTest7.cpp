#include "pch.h"
#include "CppUnitTest.h"
#include "/A_univer/OOP/Code/Lab_2/Lab_2.7_c++/Time.h"
#include "/A_univer/OOP/Code/Lab_2/Lab_2.7_c++/Time.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest7
{
	TEST_CLASS(UnitTest7)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time t(0, 1, 50);
			unsigned e = 110;
			Assert::AreEqual(e,t.ToSeconds());
		}
	};
}
