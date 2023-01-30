// write a cpp program to demonstrate single inheritance
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
int main()
{
    B obj;
    obj.getA();
    obj.getB();
    cout << "The value of a is: " << obj.a << endl;
    cout << "The value of b is: " << obj.b << endl;
    return 0;
}
