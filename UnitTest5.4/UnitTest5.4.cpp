#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.4/project5.4.cpp"
#include "cmath"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			const int N = 10;
			c = P0(N);
			Assert::AreEqual(round(c*100000)/100000,6.89907);
		}
	};
}
