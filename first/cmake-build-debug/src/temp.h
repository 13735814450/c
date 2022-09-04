//
// Created by ibm on 2022/3/14.
//
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
#ifndef FIRST_TEMP_H
using namespace std;
template <class T>
class Stack {
private:
    vector<T> elems;     // 元素

public:
    void push(T const&);  // 入栈
    void pop();               // 出栈
    T top() const;            // 返回栈顶元素
    bool empty() const;
};

#endif //FIRST_TEMP_H
