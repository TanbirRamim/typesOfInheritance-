// write a cpp program to demonstrate hybrid inheritance explicitly
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
class D : public B, public C
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
    D obj;
    obj.getA();
    obj.getB();
    obj.getC();
    obj.getD();
    cout << "The value of a is: " << obj.a << endl;
    cout << "The value of b is: " << obj.b << endl;
    cout << "The value of c is: " << obj.c << endl;
    cout << "The value of d is: " << obj.d << endl;
    return 0;
}