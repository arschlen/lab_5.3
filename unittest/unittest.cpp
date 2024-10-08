#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.3/5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unittest
{
	TEST_CLASS(unittest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = h(1);
			double expected = sin(1 + 1) / (1 + cos(1));
			Assert::AreEqual(result, expected, 1e-9);
		}
	};
}
