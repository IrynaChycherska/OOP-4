#include "pch.h"
#include "CppUnitTest.h"
#include"../4.2/Arithmecic.h"
#include"../4.2/Arithmecic.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Arithmecic z(1, 3, 2, 0);
			Assert::IsTrue(z.Sum_progression() == (((z.GetN() + 1) * (z.GetA() + (z.GetA() + z.GetN() * z.GetD()))) / 2));
		}
	};
}
