#include "stdafx.h"
#include "CppUnitTest.h"
#include "../SampleTestC/Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: テスト コードをここに挿入します

			Assert::AreEqual(fizzbuzz(1), "1");
		}
		TEST_METHOD(TestMethod2) {
			Assert::AreEqual(fizzbuzz(3), "Fizz");
		}
		TEST_METHOD(TestMethod3) {
			Assert::AreEqual(fizzbuzz(5), "Buzz");
		}
		TEST_METHOD(TestMethod4) {
			Assert::AreEqual(fizzbuzz(15), "Fizz,Buzz");
		}
		TEST_METHOD(TestMethod5) {
			
		}

	};
}