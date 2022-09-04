#include <iostream>
#include "P.h"
using namespace std;

// 基类 Shape
class Shape
{
public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
    int getCos(int area,int per)
    {
        return area * per;
    }
    Shape( int a=0, int b=0)
    {
        width = a;
        height = b;
    }
    virtual  int area()
    {
        cout << "Parent class area :" <<endl;
        return 0;
    }
protected:
    int width;
    int height;
    int getCo(int area,int per)
    {
        return area * per;
    }

private:
    int getC(int area,int per)
    {
        return area * per;
    }
};

// 基类 PaintCost
class PaintCost
{
public:
    int getCost(int area)
    {
        return area * 70;
    }
};

// 派生类
class Rectangle: public Shape, public PaintCost
{
public:
    int getArea()    {

        return (width * height);
    }
};

class Rec: public Shape{
public:
    Rec( int a=0, int b=0):Shape(a, b) { }
    int area ()
    {
        cout << "Rectangle class area :" <<endl;
        return (width * height);
    }
};

class Triangle: public Shape{
public:
    Triangle( int a=0, int b=0):Shape(a, b) { }
    int area ()
    {
        cout << "Triangle class area :" <<endl;
        return (width * height / 2);
    }
};

