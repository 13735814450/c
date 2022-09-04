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
    // ����һ�������洢 int
    vector<int> vec;
    int i;
    // ��ʾ vec ��ԭʼ��С
    cout << "vector size = " << vec.size() << endl;
    // ���� 5 ��ֵ��������
    for(i = 0; i < 5; i++){
        vec.push_back(i);
    }
    // ��ʾ vec ��չ��Ĵ�С
    cout << "extended vector size = " << vec.size() << endl;
    // ���������е� 5 ��ֵ
    for(i = 0; i < 5; i++){
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }
    vec.pop_back();
    // ʹ�õ����� iterator ����ֵ
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
    cout << "<title>Hello World - ��һ�� CGI ����</title>\n";
    cout << "</head>\n";
    cout << "<body>\n";
    cout << "<h2>Hello World! �����ҵĵ�һ�� CGI ����</h2>\n";
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
        //���������ǣ��������߳�id���̲߳��������õĺ���������ĺ�������
        int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
        if (ret != 0)
        {
            cout << "pthread_create error: error_code=" << ret << endl;
        }
    }
    //�ȸ����߳��˳��󣬽��̲Ž������������ǿ�ƽ����ˣ��߳̿��ܻ�û��Ӧ������
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
        Stack<int> intStack;  // int ���͵�ջ
        Stack<string> stringStack;    // string ���͵�ջ
        // ���� int ���͵�ջ
        intStack.push(7);
        intStack.push(7);

        cout << intStack.top() << endl;
        // ���� string ���͵�ջ
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
    cout << "bool: \t\t" << "��ռ�ֽ�����" << sizeof(bool);
    cout << "\t���ֵ��" << (numeric_limits<bool>::max)();
    cout << "\t\t��Сֵ��" << (numeric_limits<bool>::min)() << endl;
    cout << "char: \t\t" << "��ռ�ֽ�����" << sizeof(char);
    cout << "\t���ֵ��" << (numeric_limits<char>::max)();
    cout << "\t\t��Сֵ��" << (numeric_limits<char>::min)() << endl;
    cout << "signed char: \t" << "��ռ�ֽ�����" << sizeof(signed char);
    cout << "\t���ֵ��" << (numeric_limits<signed char>::max)();
    cout << "\t\t��Сֵ��" << (numeric_limits<signed char>::min)() << endl;
    cout << "unsigned char: \t" << "��ռ�ֽ�����" << sizeof(unsigned char);
    cout << "\t���ֵ��" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t��Сֵ��" << (numeric_limits<unsigned char>::min)() << endl;
    cout << "wchar_t: \t" << "��ռ�ֽ�����" << sizeof(wchar_t);
    cout << "\t���ֵ��" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t��Сֵ��" << (numeric_limits<wchar_t>::min)() << endl;
    cout << "short: \t\t" << "��ռ�ֽ�����" << sizeof(short);
    cout << "\t���ֵ��" << (numeric_limits<short>::max)();
    cout << "\t\t��Сֵ��" << (numeric_limits<short>::min)() << endl;
    cout << "int: \t\t" << "��ռ�ֽ�����" << sizeof(int);
    cout << "\t���ֵ��" << (numeric_limits<int>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<int>::min)() << endl;
    cout << "unsigned: \t" << "��ռ�ֽ�����" << sizeof(unsigned);
    cout << "\t���ֵ��" << (numeric_limits<unsigned>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<unsigned>::min)() << endl;
    cout << "long: \t\t" << "��ռ�ֽ�����" << sizeof(long);
    cout << "\t���ֵ��" << (numeric_limits<long>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<long>::min)() << endl;
    cout << "unsigned long: \t" << "��ռ�ֽ�����" << sizeof(unsigned long);
    cout << "\t���ֵ��" << (numeric_limits<unsigned long>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<unsigned long>::min)() << endl;
    cout << "double: \t" << "��ռ�ֽ�����" << sizeof(double);
    cout << "\t���ֵ��" << (numeric_limits<double>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<double>::min)() << endl;
    cout << "long double: \t" << "��ռ�ֽ�����" << sizeof(long double);
    cout << "\t���ֵ��" << (numeric_limits<long double>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<long double>::min)() << endl;
    cout << "float: \t\t" << "��ռ�ֽ�����" << sizeof(float);
    cout << "\t���ֵ��" << (numeric_limits<float>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<float>::min)() << endl;
    cout << "size_t: \t" << "��ռ�ֽ�����" << sizeof(size_t);
    cout << "\t���ֵ��" << (numeric_limits<size_t>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<size_t>::min)() << endl;
    cout << "string: \t" << "��ռ�ֽ�����" << sizeof(string) << endl;
    // << "\t���ֵ��" << (numeric_limits<string>::max)() << "\t��Сֵ��" << (numeric_limits<string>::min)() << endl;
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
    // �ֲ���������
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
    short int i;           // �з��Ŷ�����
    short unsigned int j;  // �޷��Ŷ�����
    j = 50000;
    i = j;
    // if i > 32767 then i =  i - 32767 -1 -32768
//    i = 50000;
//    j = i;
    cout << i << " " << j;
}


static int count = 10; /* ȫ�ֱ��� */

void t6() {
    while (count--) {
        t5();
    }
}

// ��������
void t5() {
    static int i = 5; // �ֲ���̬����
    i++;
    std::cout << "���� i Ϊ " << i;
    std::cout << " , ���� count Ϊ " << count << std::endl;
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
        cout << "Line 1 - a ���� b" << endl;
    } else {
        cout << "Line 1 - a ������ b" << endl;
    }
    if (a < b) {
        cout << "Line 2 - a С�� b" << endl;
    } else {
        cout << "Line 2 - a ��С�� b" << endl;
    }
    if (a > b) {
        cout << "Line 3 - a ���� b" << endl;
    } else {
        cout << "Line 3 - a ������ b" << endl;
    }
    /* �ı� a �� b ��ֵ */
    a = 5;
    b = 20;
    if (a <= b) {
        cout << "Line 4 - a С�ڻ���� b" << endl;
    }
    if (b >= a) {
        cout << "Line 5 - b ���ڻ���� a" << endl;
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
    temp = *x;    /* �����ַ x ��ֵ */
    *x = *y;        /* �� y ��ֵ�� x */
    *y = temp;    /* �� x ��ֵ�� y */
}

void swapAddress(int &x, int &y) {
    int temp;
    temp = x; /* �����ַ x ��ֵ */
    x = y;    /* �� y ��ֵ�� x */
    y = temp; /* �� x ��ֵ�� y  */
}

void t10() {
    int i, j;
    // ��������
//    srand( (unsigned)time( NULL ) );
    /* ���� 10 ������� */
    for (i = 0; i < 5; i++) {        // ����ʵ�ʵ������
        j = rand();
        cout << "������� " << j << endl;
    }

}

void t11() {
    int n[10]; // n ��һ������ 10 ������������
    // ��ʼ������Ԫ��
    for (int i = 0; i < 10; i++) {
        n[i] = i + 100; // ����Ԫ�� i Ϊ i + 100
    }
    cout << "Element" << setw(13) << "Value" << endl;
    // ���������ÿ��Ԫ�ص�ֵ
    for (int j = 0; j < 10; j++) {
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }
}

void t12() {
    int var = 20;   // ʵ�ʱ���������
    int *ip;        // ָ�����������
    ip = &var;       // ��ָ������д洢 var �ĵ�ַ
    cout << "Value of var variable: ";
    cout << var << endl;
    // �����ָ������д洢�ĵ�ַ
    cout << "Address stored in ip variable: ";
    cout << ip << endl;
    // ����ָ���е�ַ��ֵ
    cout << "Value of *ip variable: ";
    cout << *ip << endl;
}

void t13() {
    // ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
    time_t now = time(0);
    // �� now ת��Ϊ�ַ�����ʽ
    char *dt = ctime(&now);
    cout << "�������ں�ʱ�䣺" << dt << endl;

    // �� now ת��Ϊ tm �ṹ
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC ���ں�ʱ�䣺" << dt << endl;

    tm *ltm = localtime(&now);

    // ��� tm �ṹ�ĸ�����ɲ���
    cout << "��: " << 1900 + ltm->tm_year << endl;
    cout << "��: " << 1 + ltm->tm_mon << endl;
    cout << "��: " << ltm->tm_mday << endl;
    cout << "ʱ��: " << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
}

void t14() {
    Box Box1;        // ���� Box1������Ϊ Box
    Box Box2;        // ���� Box2������Ϊ Box
    Box Box3;        // ���� Box3������Ϊ Box
    double volume = 0.0;     // ���ڴ洢���

    // box 1 ����
    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    // box 2 ����
    Box2.height = 10.0;
    Box2.length = 12.0;
    Box2.breadth = 13.0;

    // box 1 �����
    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Box1 �������" << volume << endl;

    // box 2 �����
    volume = Box2.height * Box2.length * Box2.breadth;
    cout << "Box2 �������" << volume << endl;


    // box 3 ����
    Box3.set(16.0, 8.0, 12.0);
    volume = Box3.get();
    cout << "Box3 �������" << volume << endl;
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
    // �����������
    cout << "Total area: " << Rect.getArea() << endl;
    // ����ܻ���
    cout << Rect.getCos(area, 10) << " Total paint cost: $" << Rect.getCost(area) << endl;
    Rect.getCos(11, 11);
}

void t17() {
    Shape *shape;
    Rec rec(10, 7);
    Triangle tri(10, 5);
    // �洢���εĵ�ַ
    shape = &rec;
    // ���þ��ε���������� area
    shape->area();
    // �洢�����εĵ�ַ
    shape = &tri;
    // ���������ε���������� area
    shape->area();
}

void t18() {
    char data[100];
    // ��дģʽ���ļ�
    ofstream outfile;
    outfile.open("afile.dat");
    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);
    // ���ļ�д���û����������
    outfile << data << endl;
    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();
    // �ٴ����ļ�д���û����������
    outfile << data << endl;
    // �رմ򿪵��ļ�
    outfile.close();
    // �Զ�ģʽ���ļ�
    ifstream infile;
    infile.open("afile.dat");
    cout << "Reading from the file" << endl;
    infile >> data;
    // ����Ļ��д������
    cout << data << endl;
    // �ٴδ��ļ���ȡ���ݣ�����ʾ��
    infile >> data;
    cout << data << endl;
    // �رմ򿪵��ļ�
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
    double *pvalue = NULL; // ��ʼ��Ϊ null ��ָ��
    pvalue = new double;   // Ϊ���������ڴ�
    *pvalue = 29494.99;     // �ڷ���ĵ�ַ�洢ֵ
    cout << "Value of pvalue : " << *pvalue << endl;
    delete pvalue;         // �ͷ��ڴ�
}

using namespace jim1;

void t21() {
    func();
    jim1::func();
    jim2::func();
}


