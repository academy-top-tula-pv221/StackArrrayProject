#pragma once
#include <iostream>

const int size{ 100 };

struct AStack
{
	int array[size];
	int head{};
};

void Push(AStack& stack, int value);
int Pop(AStack& stack);
int Top(AStack stack);

void List(AStack stack);