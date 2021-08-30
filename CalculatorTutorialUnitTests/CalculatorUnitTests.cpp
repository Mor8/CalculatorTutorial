#include "pch.h"
#include "CppUnitTest.h"
#include "../CalculatorTutorial/Calculator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTutorialUnitTests
{
	TEST_CLASS(CalculatorUnitTests)
	{
	public:
		TEST_METHOD(AddTest)
		{
			Calculator c;
			double x = 1.0;
			double y = 2.0;
			char oper = '+';

			double expected = 3.0;
			Assert::AreEqual(expected, c.Calculate(x, oper, y));
		}

		TEST_METHOD(SubtractTest)
		{
			Calculator c;
			double x = 1.0;
			double y = 2.0;
			char oper = '-';

			double expected = -1.0;
			Assert::AreEqual(expected, c.Calculate(x, oper, y));
		}

		TEST_METHOD(MultipleTest)
		{
			Calculator c;
			double x = 1.0;
			double y = 2.0;
			char oper = '*';

			double expected = 2.0;
			Assert::AreEqual(expected, c.Calculate(x, oper, y));
		}

		TEST_METHOD(DivideTest)
		{
			Calculator c;
			double x = 1.0;
			double y = 2.0;
			char oper = '/';

			double expected = 0.5;
			Assert::AreEqual(expected, c.Calculate(x, oper, y));
		}
	};
}
