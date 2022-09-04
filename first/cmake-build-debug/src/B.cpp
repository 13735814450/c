//
// Created by ibm on 2022/3/4.
//
#include <iostream>
#include "B.h"

using namespace std;
void B::deal() {
    int i =11;
    cout << i << endl;
    Box:set(10,20,3);
    double d = get();
    cout << d << endl;
    length = 10;
}