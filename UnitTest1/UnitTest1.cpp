#include "pch.h"
#include "CppUnitTest.h"
#include "../pds_3(2)/pds_3(2)cpp.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestStirlingNumbers)
        {
            int F[20][20] = { 15 };
            stirlingNumbers(5, F);
            Assert::AreEqual(25, F[5][3]);
            Assert::AreEqual(7, F[4][2]);
            Assert::AreEqual(1, F[3][3]);
            Assert::AreEqual(1, F[5][1]); 
        }

        TEST_METHOD(TestBellNumbers)
        {
            int F[20][20] = { 0 };
            int B[20] = { 0 };
            stirlingNumbers(5, F);
            bellNumbers(5, F, B);
            Assert::AreEqual(52, B[5]);
            Assert::AreEqual(5, B[3]);
            Assert::AreEqual(1, B[1]); 
        }
	};
}