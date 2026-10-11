#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_lab_1.6/Ellipse.h"
#include "../OOP_lab_1.6/Ellipse.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace EllipseUnitTests
{
    TEST_CLASS(EllipseUnitTests)
    {
    public:

        TEST_METHOD(TestNestedPairInitAndProduct)
        {
            Ellipse::Pair p;
            bool isValid = p.Init(4.0, 5.0);

            Assert::IsTrue(isValid);
            Assert::AreEqual(20.0, p.Product(), 0.0001);
        }

        TEST_METHOD(TestNestedPairValidation)
        {
            Ellipse::Pair p;
            bool result = p.Init(-3.0, 5.0);

            Assert::IsFalse(result); // Некоректне значення пів-осі
            Assert::AreEqual(0.0, p.getFirst(), 0.0001);
        }

        TEST_METHOD(TestEllipseArea)
        {
            Ellipse el;
            el.Init(3.0, 2.0);

            // Площа: PI * 3 * 2 = 18.8495559
            double expectedArea = 18.8495559;
            double actualArea = el.Area();

            Assert::AreEqual(expectedArea, actualArea, 0.0001);
        }

        TEST_METHOD(TestEllipsePerimeter)
        {
            Ellipse el;
            el.Init(3.0, 4.0);

            // Периметр: 2 * PI * sqrt((9 + 16) / 2) = 2 * PI * sqrt(12.5) = 22.2144146
            double expectedPerim = 22.2144146;
            double actualPerim = el.Perimeter();

            Assert::AreEqual(expectedPerim, actualPerim, 0.0001);
        }
    };
}