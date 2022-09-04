//
// Created by ibm on 2022/2/24.
//

#include "su.h"

namespace jim {
    int maxv(int num1, int num2) {
        // 局部变量声明
        int result;

        if (num1 > num2)
            result = num1;
        else
            result = num2;

        return result;
    }
}