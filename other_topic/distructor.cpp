#include<iostream>
using namespace std;
int count = 0;

class demo
{
    public:
    demo()
    {
        count++;
        cout<<"\nnumber of object created: "<<count;
    }
    ~demo()
    {
        count--;
        cout<<"\nnumber of object destroy: "<<count;
    }
};
int main()
{
    demo a,b,c;
    {
        demo d;
    }
    return 0;
}