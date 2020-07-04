//
//  main.cpp
//  Stack
//
//  Created by Tibor Fekete on 04/07/2020.
//  Copyright © 2020 Tibor Fekete. All rights reserved.
//

#include <iostream>
#include "ArrayStack.hpp"

int main(int argc, const char * argv[]) {
    
    ArrayStack s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    
    std::cout << s.peek() << " Peeked from stack\n";
    std::cout << s.peek() << " Peeked from stack\n";
    
    std::cout << s.pop() << " Popped from stack\n";
    
    std::cout << s.peek() << " Peeked from stack\n";
    
    
    return 0;
}
