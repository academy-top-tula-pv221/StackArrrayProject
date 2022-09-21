#include "StackAutoArray.h"

void Push(AStack& stack, int value)
{
	if (stack.head < size)
		stack.array[stack.head++] = value;
}

int Pop(AStack& stack)
{
	if(stack.head > 0)
		return stack.array[--stack.head];
}

int Top(AStack stack)
{
	if (stack.head > 0)
		return stack.array[stack.head - 1];
}

void List(AStack stack)
{
	for (int i = stack.head - 1; i >= 0; i--)
		std::cout << stack.array[i] << "\n";
}
