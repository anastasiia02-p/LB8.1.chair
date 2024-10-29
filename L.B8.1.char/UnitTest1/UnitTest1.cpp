#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../L.B8.1.char/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "This is a BASIC BASIC example";
			int counts[5] = { 0 };

			countBASICCharacters(str, counts);
			Assert::AreEqual(2, counts[0], L"B should appear 2 times");
			Assert::AreEqual(2, counts[1], L"A should appear 2 times");
			Assert::AreEqual(2, counts[2], L"S should appear 2 times");
			Assert::AreEqual(2, counts[3], L"I should appear 2 times");
			Assert::AreEqual(2, counts[4], L"C should appear 2 times");
		}
	};
}
