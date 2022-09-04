//
// Created by ibm on 2022/3/4.
//

#include "Box.h"
double Box::get(void)
{
    double d = length +10;
    return length * breadth * height;
}

void Box::set( double len, double bre, double hei)
{
    length = len;
    breadth = bre;
    height = hei;
}