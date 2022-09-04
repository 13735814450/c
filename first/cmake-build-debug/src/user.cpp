//
// Created by ibm on 2022/3/15.
//
#include "string"
#include "user.h"
using namespace std;
class User{
public:
    int age;
    string name;

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        User::age = age;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        User::name = name;
    }

    int go(){
        int i = 10;
        return i;
    };
};
