#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.4/lab5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int c = 5.57517;
			t = S0(1, 6);
			Assert::AreEqual(t, c);
		}
	};
}
