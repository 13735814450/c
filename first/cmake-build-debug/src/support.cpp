#include <iostream>

extern int ct;

//int maxv(int, int);

void write_extern()
{
    std::cout << "ct is " << ct << std::endl;
}

//int maxv(int num1, int num2)
//{
//    // 局部变量声明
//    int result;
//
//    if (num1 > num2)
//        result = num1;
//    else
//        result = num2;
//
//    return result;
//}