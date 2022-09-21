#pragma once


namespace DynArray
{
	template <typename T>
	struct DStack
	{
		T* array{ nullptr };
		int head{};
	};

	template <typename T>
	void Push(DStack<T>& stack, T value)
	{
		T* arrayNew = new T[stack.head + 1];
		for (int i = 0; i < stack.head; i++)
			arrayNew[i] = stack.array[i];
		arrayNew[stack.head++] = value;

		delete[]stack.array;
		stack.array = arrayNew;
	}

	template <typename T>
	T Pop(DStack<T>& stack)
	{
		T* arrayNew = new T[--stack.head];
		T value = stack.array[stack.head];
		for (int i = 0; i < stack.head; i++)
			arrayNew[i] = stack.array[i];
		
		delete[]stack.array;
		stack.array = arrayNew;

		return value;
	}

	template <typename T>
	T Top(DStack<T> stack)
	{
		return stack.array[stack.head - 1];
	}

	template <typename T>
	void List(DStack<T> stack)
	{
		for (int i = stack.head - 1; i >= 0; i--)
			std::cout << stack.array[i] << "\n";
	}
}