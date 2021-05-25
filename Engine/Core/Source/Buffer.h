#pragma once

template <typename T>
class Buffer
{
	void* memory{ nullptr };
	unsigned int count{ 0 };
	size_t elementSize{ 0 };
	size_t memSize { 0 };

public:
	Buffer(int size)
	{
		elementSize = sizeof(T);
		memSize = elementSize * size;
		memory = malloc(memSize);
		memset(memory, 0, memSize);
	}

	~Buffer()
	{
		free(memory);
	}

	void Insert(const T& value, int location)
	{
		size_t bufferPosition = elementSize * location;
		memcpy(memory, &value, elementSize);
		count++;
	}
};