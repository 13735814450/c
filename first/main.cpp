#include <iostream>
#include <limits>
#include <ctime>
#include <iomanip>
#include "cmake-build-debug/src/B.h"
#include "cmake-build-debug/src/P.cpp"
#include "cmake-build-debug/src/Ns.h"
#include "cmake-build-debug/src/temp.cpp"
#include "cmake-build-debug/src/sig.h"
#include "cmake-build-debug/src/say.h"
#include <fstream>
#include <csignal>
#include <zconf.h>
#include <pthread.h>
#define LENGTH 10;
#define P "PP";

int data();

void t1();

void t2();

void t3();

void t4();

int max(int i, int j);

void t5();

void t6();

void t7();

void t8();

void t9();

void t10();

void t11();

void t12();

void t13();

void t14();

void t15();

void t16();

void t17();

void t18();

void t19();

void t20();

void t21();

void t22();
void t23();
double division(int, int);

int maxva(int, int);

void swap(int *x, int *y);

void swapAddress(int &x, int &y);

using namespace std;

int g;
void t24();
void t25();
void t26();
#include "cmake-build-debug/src/user.cpp"
#include "cmake-build-debug/src/method.h"
void t27();
void t28();
int main() {
    t28();
}

void t28(){
    int v = dealu(11,22);
    cout << v << endl;
}
void t27(){
//    User user;
//    user.setAge(11);
//    cout << user.getAge() << endl;
//    cout << user.go() << endl;
}
void t26(){
    // 创建一个向量存储 int
    vector<int> vec;
    int i;
    // 显示 vec 的原始大小
    cout << "vector size = " << vec.size() << endl;
    // 推入 5 个值到向量中
    for(i = 0; i < 5; i++){
        vec.push_back(i);
    }
    // 显示 vec 扩展后的大小
    cout << "extended vector size = " << vec.size() << endl;
    // 访问向量中的 5 个值
    for(i = 0; i < 5; i++){
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }
    vec.pop_back();
    // 使用迭代器 iterator 访问值
    vector<int>::iterator v = vec.begin();
    while( v != vec.end()) {
        cout << "value of v = " << *v << endl;
        v++;
    }
}
void t25(){
    cout << "Content-type:text/html\r\n\r\n";
    cout << "<html>\n";
    cout << "<head>\n";
    cout << "<title>Hello World - 第一个 CGI 程序</title>\n";
    cout << "</head>\n";
    cout << "<body>\n";
    cout << "<h2>Hello World! 这是我的第一个 CGI 程序</h2>\n";
    cout << "</body>\n";
    cout << "</html>\n";
}
#define NUM_THREADS 5
void t24(){
    void* ar ;
    say_hello(ar);
    pthread_t tids[NUM_THREADS];
    for(int i = 0; i < NUM_THREADS; ++i)
    {
        //参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
        int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
        if (ret != 0)
        {
            cout << "pthread_create error: error_code=" << ret << endl;
        }
    }
    //等各个线程退出后，进程才结束，否则进程强制结束了，线程可能还没反应过来；
    pthread_exit(NULL);
}


void t23(){
    int i = 1;
    while(i++){
        cout << "Going to sleep...." << endl;
        sleep(1);
        if( i == 3 ){
            raise( SIGINT);
        }
        signal(SIGINT, signalHandler);
    }

}
void t22() {
    try {
        Stack<int> intStack;  // int 类型的栈
        Stack<string> stringStack;    // string 类型的栈
        // 操作 int 类型的栈
        intStack.push(7);
        intStack.push(7);

        cout << intStack.top() << endl;
        // 操作 string 类型的栈
        stringStack.push("hello");
        cout << stringStack.top() << std::endl;
        stringStack.pop();
//        stringStack.pop();
        stringStack.empty();
    }
    catch (exception const &ex) {
        cerr << "Exception: " << ex.what() << endl;
    }
}

void t2() {
    cout << "type: \t\t" << "************size**************" << endl;
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
    cout << "\t最大值：" << (numeric_limits<bool>::max)();
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
    cout << "char: \t\t" << "所占字节数：" << sizeof(char);
    cout << "\t最大值：" << (numeric_limits<char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
    cout << "short: \t\t" << "所占字节数：" << sizeof(short);
    cout << "\t最大值：" << (numeric_limits<short>::max)();
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
    cout << "int: \t\t" << "所占字节数：" << sizeof(int);
    cout << "\t最大值：" << (numeric_limits<int>::max)();
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
    cout << "long: \t\t" << "所占字节数：" << sizeof(long);
    cout << "\t最大值：" << (numeric_limits<long>::max)();
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
    cout << "double: \t" << "所占字节数：" << sizeof(double);
    cout << "\t最大值：" << (numeric_limits<double>::max)();
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
    cout << "long double: \t" << "所占字节数：" << sizeof(long double);
    cout << "\t最大值：" << (numeric_limits<long double>::max)();
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
    cout << "float: \t\t" << "所占字节数：" << sizeof(float);
    cout << "\t最大值：" << (numeric_limits<float>::max)();
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;
    cout << "type: \t\t" << "************size**************" << endl;
}

void t1() {
    int i, j, k;
    char c;
    float f;
    double d;
    string str = "dd";
    i = 10;
    j = 11;
    k = i + j;
    c = 'c';
    f = 0.3;
    d = 0.99;
    cout << k << endl;
    cout << c << endl;
    cout << f + d << endl;
    cout << str << endl;
    g = 20;
    cout << g << endl;
}


int max(int num1, int num2) {
    // 局部变量声明
    int result;
    if (num1 > num2)
        result = num1;
    else
        result = num2;
    return result;
}

void t3() {
    cout << LENGTH;
    cout << "\n";
    const string s = "ddd";
    cout << s;
    g = 11;
    cout << g << endl;
    t1();
    cout << g << endl;
}

void t4() {
    short int i;           // 有符号短整数
    short unsigned int j;  // 无符号短整数
    j = 50000;
    i = j;
    // if i > 32767 then i =  i - 32767 -1 -32768
//    i = 50000;
//    j = i;
    cout << i << " " << j;
}


static int count = 10; /* 全局变量 */

void t6() {
    while (count--) {
        t5();
    }
}

// 函数定义
void t5() {
    static int i = 5; // 局部静态变量
    i++;
    std::cout << "变量 i 为 " << i;
    std::cout << " , 变量 count 为 " << count << std::endl;
}

int ct;

extern void write_extern();

void t7() {
    ct = 5;
    write_extern();
}

void t8() {
    int a = 21;
    int b = 10;
    int c;

    if (a == b) {
        cout << "Line 1 - a 等于 b" << endl;
    } else {
        cout << "Line 1 - a 不等于 b" << endl;
    }
    if (a < b) {
        cout << "Line 2 - a 小于 b" << endl;
    } else {
        cout << "Line 2 - a 不小于 b" << endl;
    }
    if (a > b) {
        cout << "Line 3 - a 大于 b" << endl;
    } else {
        cout << "Line 3 - a 不大于 b" << endl;
    }
    /* 改变 a 和 b 的值 */
    a = 5;
    b = 20;
    if (a <= b) {
        cout << "Line 4 - a 小于或等于 b" << endl;
    }
    if (b >= a) {
        cout << "Line 5 - b 大于或等于 a" << endl;
    }
}

void t9() {
    for (int i = 0; i < 6; i++) {
        cout << i << endl;
    }
    int i = 10;
    while (i < 20) {
        cout << i << endl;
        i++;
    }
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;    /* 保存地址 x 的值 */
    *x = *y;        /* 把 y 赋值给 x */
    *y = temp;    /* 把 x 赋值给 y */
}

void swapAddress(int &x, int &y) {
    int temp;
    temp = x; /* 保存地址 x 的值 */
    x = y;    /* 把 y 赋值给 x */
    y = temp; /* 把 x 赋值给 y  */
}

void t10() {
    int i, j;
    // 设置种子
//    srand( (unsigned)time( NULL ) );
    /* 生成 10 个随机数 */
    for (i = 0; i < 5; i++) {        // 生成实际的随机数
        j = rand();
        cout << "随机数： " << j << endl;
    }

}

void t11() {
    int n[10]; // n 是一个包含 10 个整数的数组
    // 初始化数组元素
    for (int i = 0; i < 10; i++) {
        n[i] = i + 100; // 设置元素 i 为 i + 100
    }
    cout << "Element" << setw(13) << "Value" << endl;
    // 输出数组中每个元素的值
    for (int j = 0; j < 10; j++) {
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }
}

void t12() {
    int var = 20;   // 实际变量的声明
    int *ip;        // 指针变量的声明
    ip = &var;       // 在指针变量中存储 var 的地址
    cout << "Value of var variable: ";
    cout << var << endl;
    // 输出在指针变量中存储的地址
    cout << "Address stored in ip variable: ";
    cout << ip << endl;
    // 访问指针中地址的值
    cout << "Value of *ip variable: ";
    cout << *ip << endl;
}

void t13() {
    // 基于当前系统的当前日期/时间
    time_t now = time(0);
    // 把 now 转换为字符串形式
    char *dt = ctime(&now);
    cout << "本地日期和时间：" << dt << endl;

    // 把 now 转换为 tm 结构
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC 日期和时间：" << dt << endl;

    tm *ltm = localtime(&now);

    // 输出 tm 结构的各个组成部分
    cout << "年: " << 1900 + ltm->tm_year << endl;
    cout << "月: " << 1 + ltm->tm_mon << endl;
    cout << "日: " << ltm->tm_mday << endl;
    cout << "时间: " << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
}

void t14() {
    Box Box1;        // 声明 Box1，类型为 Box
    Box Box2;        // 声明 Box2，类型为 Box
    Box Box3;        // 声明 Box3，类型为 Box
    double volume = 0.0;     // 用于存储体积

    // box 1 详述
    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    // box 2 详述
    Box2.height = 10.0;
    Box2.length = 12.0;
    Box2.breadth = 13.0;

    // box 1 的体积
    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Box1 的体积：" << volume << endl;

    // box 2 的体积
    volume = Box2.height * Box2.length * Box2.breadth;
    cout << "Box2 的体积：" << volume << endl;


    // box 3 详述
    Box3.set(16.0, 8.0, 12.0);
    volume = Box3.get();
    cout << "Box3 的体积：" << volume << endl;
}

void t15() {
    B b;
    b.deal();
//    b.length = 11;
//    b.get();
}

void t16() {
    Rectangle Rect;
    int area;
    Rect.setWidth(5);
    Rect.setHeight(7);
    area = Rect.getArea();
    // 输出对象的面积
    cout << "Total area: " << Rect.getArea() << endl;
    // 输出总花费
    cout << Rect.getCos(area, 10) << " Total paint cost: $" << Rect.getCost(area) << endl;
    Rect.getCos(11, 11);
}

void t17() {
    Shape *shape;
    Rec rec(10, 7);
    Triangle tri(10, 5);
    // 存储矩形的地址
    shape = &rec;
    // 调用矩形的求面积函数 area
    shape->area();
    // 存储三角形的地址
    shape = &tri;
    // 调用三角形的求面积函数 area
    shape->area();
}

void t18() {
    char data[100];
    // 以写模式打开文件
    ofstream outfile;
    outfile.open("afile.dat");
    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);
    // 向文件写入用户输入的数据
    outfile << data << endl;
    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();
    // 再次向文件写入用户输入的数据
    outfile << data << endl;
    // 关闭打开的文件
    outfile.close();
    // 以读模式打开文件
    ifstream infile;
    infile.open("afile.dat");
    cout << "Reading from the file" << endl;
    infile >> data;
    // 在屏幕上写入数据
    cout << data << endl;
    // 再次从文件读取数据，并显示它
    infile >> data;
    cout << data << endl;
    // 关闭打开的文件
    infile.close();
}

double division(int a, int b) {
    if (b == 0) {
        throw "Division by zero condition!";
    }
    double c = 0;
    try {
        c = a / b;
    } catch (std::exception e) {
        cout << " no " << endl;
    }
    return c;
}

void t19() {
    try {
        int x = 50;
        int y = 0;
        double z = division(x, y);
        cout << z << endl;
    } catch (const char *msg) {
        cerr << msg << endl;
    }
}

void t20() {
    double *pvalue = NULL; // 初始化为 null 的指针
    pvalue = new double;   // 为变量请求内存
    *pvalue = 29494.99;     // 在分配的地址存储值
    cout << "Value of pvalue : " << *pvalue << endl;
    delete pvalue;         // 释放内存
}

using namespace jim1;

void t21() {
    func();
    jim1::func();
    jim2::func();
}


