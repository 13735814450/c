//
// Created by ibm on 2022/3/4.
//

#ifndef FIRST_BOX_H
#define FIRST_BOX_H


class Box {
public:
    double length;   // 长度
    double breadth;  // 宽度
    double height;   // 高度
    // 成员函数声明
    double get(void);

    void set(double len, double bre, double hei);

protected:
    int k;

private:
    char str;

};


#endif //FIRST_BOX_H
