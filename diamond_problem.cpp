#include<bits/stdc++.h>
using namespace std;

class A
{

    public:
        int k;
        void display(){
            cout<<"This is display meathod for class A"<<endl;
        }
};
class B : virtual public A
{
    public:
        void display1(){
            cout<<"This is display meathod for class B"<<endl;
        }
};


class C : virtual public A
{
public:
    void display2(){
            cout<<"This is display meathod for class c"<<endl;
    }
};


class D : public B, public C
{
public:
    void display3(){
            cout<<"This is display meathod for class D"<<endl;
    }
};

int main()
{
    D d;
    //d.display();
    d.display1();
    d.display2();
    d.display3();

d.k = 10;     //memeber display was ambiguous
    return 0;
}
