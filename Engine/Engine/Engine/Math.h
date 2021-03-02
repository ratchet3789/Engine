#pragma once
#include <math.h>

#include <iostream>

template <typename T>
class Vec2
{
public:
	Vec2(T x, T y) { X = x; Y = y; }

	template<typename T>
	inline T Magnitude() const { return sqrt(X * X + Y * Y); }
	template<>
	inline float Magnitude() const { return sqrtf(X * X + Y * Y); }
	template<>
	inline int Magnitude() const { return 0; }

	inline Vec2 GetNormalized() const { return Vec2(X / Magnitude(), Y / Magnitude()); }
	inline void Normalize() { X /= Magnitude(); Y /= Magnitude(); };

	T X, Y;
};