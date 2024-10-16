#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.3.rec/Lb_6.3.rec.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            const int SIZE = 20;
            int arr[SIZE]{};
            int MIN = -20;
            int MAX = 20;
            create(arr, SIZE, MIN, MAX, 0);
            Assert::AreEqual(10, CountPositive(arr, SIZE, 0), 0.0001);
        }

        TEST_METHOD(TestMethod2)
        {
            const int SIZE = 20;
            int arr[SIZE]{};
            int MIN = -20;
            int MAX = 20;
            SecondCreate(arr, SIZE, MIN, MAX, 0);
            Assert::AreEqual(7, SecondCountPositive(arr, SIZE, 0), 0.0001);
        }
    };
}
