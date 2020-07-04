//
//  ArrayStack.cpp
//  Stack
//
//  Created by Tibor Fekete on 04/07/2020.
//  Copyright © 2020 Tibor Fekete. All rights reserved.
//

#include "ArrayStack.hpp"
#include <iostream>


ArrayStack::ArrayStack()
{
    top = -1;
}

bool ArrayStack::isEmpty()
{
    return (top < 0);
}

bool ArrayStack::push(int x)
{
    if (top >= (MAX - 1)) {
        std::cout << "Stack Overflow";
        return false;
    }
    else {
        a[++top] = x;
        std::cout << x << " pushed into stack\n";
        return true;
    }
}

int ArrayStack::pop()
{
    if (top < 0) {
        std::cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}
int ArrayStack::peek()
{
    if (top < 0) {
        std::cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}
