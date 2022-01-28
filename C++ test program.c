#include<iostream>
using namespace std;
class a
{
public:
    void f1()
    {
        cout<<"\nIn A";
    }
};
class b:public a
{
    void f1()
    {
        cout<<"\nIn B";
    }
};
void main()
{
    b A;
    a.f1();
    getch();
}
