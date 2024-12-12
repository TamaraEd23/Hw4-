//
//  SpecialStack.cpp
//  Project 4
//  Created by Tamara Edmond on 12/8/24.
//
#include "SpecialStack.hpp"
#include <iostream>
#include <stack>
using namespace std;

SpecialStack::SpecialStack() {
}

void SpecialStack::push(int value) {
    data.push(value);
}

int SpecialStack::pop() {
    if (data.empty()) {
        throw -1;
    }
    int removed = data.top();
    data.pop();
    return removed;
}

int SpecialStack::peek() {
    if (data.empty()) {
        throw -1;
    }
    return data.top();
}

bool SpecialStack::empty() {
    return data.empty();
}

void SpecialStack::popOdd() {
    int item;
    bool working = true;
    stack<int> evenStack;

    if (data.empty()) {
        throw -1;
    }

    while (!data.empty() && working) {
        item = data.top();
        data.pop();
        if (item % 2 != 0) {
            working = false;
        } else {
            evenStack.push(item);
        }
    }

    while (!evenStack.empty()) {
        item = evenStack.top();
        evenStack.pop();
        data.push(item);
    }
}

void SpecialStack::popEven() {
    int item;
    bool working = true;
    stack<int> oddStack;

    if (data.empty()) {
        throw -1; // Throw an exception if the stack is empty
    }

    while (!data.empty() && working) {
        item = data.top();
        data.pop();
        if (item % 2 == 0) {
            working = false; 
        } else {
            oddStack.push(item);
        }
    }

    while (!oddStack.empty()) {
        item = oddStack.top();
        oddStack.pop();
        data.push(item);
    }
}

void SpecialStack::printStack() {
    stack<int> tempStack = data;

    while (!tempStack.empty()) {
        cout << " " << tempStack.top() << endl;
        tempStack.pop();
    }
    cout << endl;
}
