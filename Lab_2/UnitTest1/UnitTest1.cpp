#include "pch.h"
#include "CppUnitTest.h"
#include "/A_univer/OOP/Code/Lab_2/Lab_2.1_c++/FloatRange.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			FloatRange f(1.5, 5.5);
			f--;
			Assert::AreEqual(4.5, f.GetSecond()); // Value returned by post-decrement
		}
	};
}
