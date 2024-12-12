//
//  SpecialStack.hpp
//  Project 4
// Created by Tamara Edmond on 12/7/24.
//

#ifndef SPECIALSTACK_HPP
#define SPECIALSTACK_HPP

#include <stack>

class SpecialStack {
private:
    std::stack<int> data;

public:
    SpecialStack();
    
    void push(int value);
    int pop();
    int peek();
    bool empty();

    void popOdd();
    void popEven();

    void printStack();  
};

#endif

