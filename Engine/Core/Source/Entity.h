#include "Vector.h"

/*
* Core Entity Class
* Handles Position & Movement, Update Events, Inputs
*/
class Entity
{
	Entity() = default;

private:
	Vec2<float> EntityPosition;

	bool CanBePosessed = false;

public:
	virtual void Possess()
	{
		if (!CanBePosessed)
		{
			return;
		}
	}

	virtual void Update(float deltaTime)
	{

	}

	virtual void Input()
	{

	}
};