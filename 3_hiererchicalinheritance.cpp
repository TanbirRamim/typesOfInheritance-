// write a cpp program to demonstrate hiererchical inheritance
#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int a;
    void getA()
    {
        cout << "Enter the value of a: ";
        cin >> a;
    }
};
class B : public A
{
public:
    int b;
    void getB()
    {
        cout << "Enter the value of b: ";
        cin >> b;
    }
};
class C : public A
{
public:
    int c;
    void getC()
    {
        cout << "Enter the value of c: ";
        cin >> c;
    }
};
class D : public A
{
public:
    int d;
    void getD()
    {
        cout << "Enter the value of d: ";
        cin >> d;
    }
};
int main()
{
    B obj1;
    C obj2;
    D obj3;
    obj1.getA();
    obj1.getB();
    obj2.getA();
    obj2.getC();
    obj3.getA();
    obj3.getD();
    cout << "The value of a is: " << obj1.a << endl;
    cout << "The value of b is: " << obj1.b << endl;
    cout << "The value of a is: " << obj2.a << endl;
    cout << "The value of c is: " << obj2.c << endl;
    cout << "The value of a is: " << obj3.a << endl;
    cout << "The value of d is: " << obj3.d << endl;
    return 0;
}