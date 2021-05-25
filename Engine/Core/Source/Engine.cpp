#include <iostream>
#include "Math.h"
#include "Test.h"
#include "Vector.h"
#include "Buffer.h"

int main()
{
	Test* TestClass = new Test();
	Vec2<float> testVec(1.0f, 1.0f);
	std::cout << "Div " << testVec / Vec2<float>(2.0f, 2.0f) << std::endl;
	std::cout << "Mul " << testVec * Vec2<float>(2.0f, 2.0f) << std::endl;
	std::cout << "Add " << testVec + Vec2<float>(1.0f, 1.0f) << std::endl;
	std::cout << "Sub " << testVec - Vec2<float>(0.5f, 0.5f) << std::endl;
	std::cout << "Is Zero? " << testVec.IsZero() << std::endl;
	std::cout << "Zero " << testVec.Zero() << std::endl;
	std::cout << "One " << testVec.One() << std::endl;
	std::cout << "Forward " << testVec.Forward() << std::endl;
	std::cout << "Right " << testVec.Right() << std::endl;
	
	Buffer<char> tempBuffer(6);
	tempBuffer.Insert('C', 0);
	tempBuffer.Insert('A', 1);
	tempBuffer.Insert('T', 2);


	while (false != true)
	{
		//Runs to exclusively show the performance profiler
	}

}