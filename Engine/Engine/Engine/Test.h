#pragma once
#include "Vector.h"

class Test
{
	Test()
	{
		Vec2<float> A(2,4);
		Vec2<float> B(2, 4);

		std::cout << (A + B).X << (A + B).Y << std::endl;

	}
}