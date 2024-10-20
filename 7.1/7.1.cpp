#include "pch.h"
#include "CppUnitTest.h"
#include "../7.1 рек/7.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My71
{
	TEST_CLASS(My71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int rowCount = 3;
			const int colCount = 3;
			const int Low = 1;
			const int High = 9;
			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];

			Create(a, rowCount, colCount, Low, High);

			for (int i = 0; i < rowCount; i++)
			{
				for (int j = 0; j < colCount; j++)
				{
					Assert::IsTrue(a[i][j] >= Low && a[i][j] <= High, L"Value out of range");
				}
			}

			for (int i = 0; i < rowCount; i++)
				delete[] a[i];
			delete[] a;
		}
	};
}
