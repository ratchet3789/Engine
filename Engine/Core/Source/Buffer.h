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
		// Size of our Data Type
		elementSize = sizeof(T);
		// Size of our Buffer in Memory based on the item count
		memSize = elementSize * size;
		// Allocate that size memory
		memory = malloc(memSize);
		// Fill that memory entirely with 0s
		memset(memory, 0, memSize);
	}

	~Buffer()
	{
		// Clear the memory
		free(memory);
		// Ensure no UAF issues
		memory = nullptr;
	}

	void Insert(const T& value, int location)
	{
		// Get mem position
		size_t bufferPosition = elementSize * location;
		// Get the start addr of our Buffer
		T* memoryStart = (T*)memory;
		// Cpy our value to the correct memory location
		memcpy(memoryStart + bufferPosition, &value, elementSize);
		// Increment the memory count
		count++;
	}
};
