//
// Created by ibm on 2022/3/14.
//
#include "iostream"
#include "say.h"
using namespace std;
void* say_hello(void* args)
{
    cout << "Hello Runoob!" << endl;
    return 0;
}