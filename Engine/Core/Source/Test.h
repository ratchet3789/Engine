#pragma once
#include "Vector.h"

class Test
{
public:
	Test()
	{
		Vec2<float> A(2, 4);
		Vec2<float> B(2, 4);
		Vec2<float> C = A + B;
		std::cout << C << std::endl;
	}
};