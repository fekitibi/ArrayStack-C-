//
//  ArrayStack.hpp
//  Stack
//
//  Created by Tibor Fekete on 04/07/2020.
//  Copyright © 2020 Tibor Fekete. All rights reserved.
//

#ifndef ArrayStack_hpp
#define ArrayStack_hpp

#define MAX 1000
  
class ArrayStack {
private:
    int top;
    int a[MAX];
  
public:
    ArrayStack();
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

#endif /* ArrayStack_hpp */
