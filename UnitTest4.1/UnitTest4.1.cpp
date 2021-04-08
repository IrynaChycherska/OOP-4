#include "pch.h"
#include "CppUnitTest.h"
#include"../4.1/Abstract.h"
#include"../4.1/Abstract.cpp"
#include"../4.1/Arithmecic.h"
#include"../4.1/Arithmecic.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest41
{
	TEST_CLASS(UnitTest41)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Arithmecic z(1, 3, 2, 0);
			Assert::IsTrue(z.Sum_progression() == ((z.GetN() + 1) * (z.GetA() + (z.GetA() + z.GetN() * z.GetD()))) / 2);
		}
	};
}
