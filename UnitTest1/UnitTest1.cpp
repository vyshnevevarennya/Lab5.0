#include "pch.h"
#include "CppUnitTest.h"
#include "D:\study\prog\Lab5.1\Lab5.1\Lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 0, y = 0;
			int t;
			t = (y * 1.) / (1 + x * x);
			Assert::AreEqual(t, 0);
		}
	};
}
