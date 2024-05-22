#include<iostream>
using namespace std;

class demo
{
    private:
    int a,b;

    public:
    demo(int m, int n)
    {
        a = m;
        b = n;
    }
    void putdata()
    {
        cout<<"a = "<<a<<"\nb = "<<b;
    }   
};

int main()
{
    int x,y;
    cout<<"Enter any two numbers: ";
    cin>>x>>y;
    demo c(x,y);
    c.putdata();
    return 0;
}