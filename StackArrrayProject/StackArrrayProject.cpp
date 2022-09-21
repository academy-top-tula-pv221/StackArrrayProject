#include <iostream>
#include "StackAutoArray.h"
#include "StackDynArray.h"

int main()
{
    DynArray::DStack<int> stack;
    DynArray::Push(stack, 100);
    DynArray::Push(stack, 200);
    DynArray::Push(stack, 300);

    DynArray::List(stack);

    std::cout << "pop = " << DynArray::Pop(stack) << "\n";

    DynArray::List(stack);

    /*AStack stack;
    Push(stack, 100);
    Push(stack, 200);
    Push(stack, 300);

    List(stack);

    std::cout << "pop " << Pop(stack) << "\n";

    List(stack);*/
}


