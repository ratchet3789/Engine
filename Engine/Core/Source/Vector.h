#pragma once
#include <math.h>
#include <iostream>
#include <ostream>

//Todo: Look up templates
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
	inline void Normalize() { X /= Magnitude(); Y /= Magnitude(); }

	Vec2 operator+(const Vec2 b) { return Vec2(X + b.X, Y + b.Y); }
	Vec2 operator-(const Vec2 b) { return Vec2(X - b.X, Y - b.Y); }
	Vec2 operator*(const Vec2 b) { return Vec2(X * b.X, Y * b.Y); }
	Vec2 operator/(const Vec2 b)
	{
/*
		Vec2 tmpVec(1, 1);
		if (X == 0 || b.X == 0)
		{
			tmpVec.x = 0
		}
		if (Y == 0 || b.Y == 0)
		{
			tmpVec.y = 0;
		}*/
		return Vec2(X / b.X, Y / b.Y);
	}

	friend std::ostream& operator<<(std::ostream& os, const Vec2 v2) { os << "(" << v2.X << ", " << v2.Y << ")"; return os; }

	inline bool IsZero()
	{
		return (X == 0 && Y == 0);
	}

	inline static Vec2 Zero()
	{
		return Vec2(0,0);
	}

	inline static Vec2 One()
	{
		return Vec2(1,1);
	}

	inline static Vec2 Forward()
	{
		return Vec2(1,0);
	}

	inline static Vec2 Right()
	{
		return Vec2(0,1);
	}

	T X, Y;
};