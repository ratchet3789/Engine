#pragma once
#include <math.h>

#include <iostream>

#define PI 3.14159265359

class MathF
{
public:
	/*
		Seems a bit pointless just doing calls directly to math.h?
	*/
	static float Deg2Rad(float deg) { return deg * 180.0f / PI; }
	static float Rad2Deg(float rad) { return rad * PI / 180.0f; }
	static long Sqrt(double x) { return sqrt(x); }
	static float Sqrt(float x) { return sqrtf(x); }
	static float Pow(double x, double y) { return pow(x, y); }
	static float Pow(float x, float y) { return powf(x, y); }
};

class Vec2
{
public:
	Vec2(float x, float y) { X = x; Y = y; }
	Vec2(int x, int y) { X = x; Y = y; }

	float Magnitude() { return MathF::Sqrt(X * X + Y * Y); }
	Vec2 Normalize() { return Vec2(X / Magnitude(), Y / Magnitude()); }

	float X, Y;
};

//
class Tests
{
public:
	Tests()
	{
		Vec2 tempVec = Vec2(4.0f, 8.0f);

		std::cout << tempVec.Normalize().X << ", " << tempVec.Normalize().Y << std::endl;
		std::cout << tempVec.Magnitude() << std::endl;
		int a[3] = {1,2,3};
		int* b = a;
		std::cout << &++*b;
	}
};