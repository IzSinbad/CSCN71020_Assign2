#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getArea(int*, int*);
extern "C" int getPerimeter(int*, int*);
extern "C" void setLength(int, int*);
extern "C" void setWidth(int, int*);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:
		
		TEST_METHOD(TestAreaFuncionality)
		{
		/*This is testing the Area function length*width=area*/
			int result = 0;
			int length = 2;
			int width = 4;
			result = getArea(&length, &width);
			Assert::AreEqual(8, result);/*expected 8*/

		}
		TEST_METHOD(TestPerimiterFuncionality)
		{
			/*This is testing the Perimiter Function length+lenght+width+width=perimiter*/
			int result = 0;
			int length = 2;
			int width = 4;
			result = getPerimeter(&length,&width);
			Assert::AreEqual(12, result);/*expected 12*/
		}
			/*width functionalities*/
		TEST_METHOD(TestMinWidthFuncionality)
		{
			int width = 0;
			setWidth(1, &width);
			Assert::AreEqual(1, width);
		}
		TEST_METHOD(TestMaxWidthFuncionality)
		{
			int width = 0;
			setWidth(99, &width);
			Assert::AreEqual(99, width);
		}
		TEST_METHOD(TestValidWidthFuncionality)
		{
			int width = 0;
			setWidth(40, &width);
			Assert::AreEqual(40, width);
		}
		/*Length Functionalities*/
		TEST_METHOD(TestMinLengthFncionality)
		{
			int length = 0;
			setLength(1, &length);
			Assert::AreEqual(1, length);
		}
		TEST_METHOD(TestMaxLengthFuncionality)
		{
			int length = 0;
			setLength(99, &length);
			Assert::AreEqual(99, length);
		}
		TEST_METHOD(TestValidLengthfuncionality)
		{
			int length = 30;
			setLength(30, &length);
			Assert::AreEqual(30, length);
		}
	};
}
