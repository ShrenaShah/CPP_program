#include<iostream>
#include<conio.h>
using namespace std;

class add
{
    private:
    int a,b;

    public:
    void getdata()
    {
        cout<<"Enter Two numbers: ";
        cin>>a>>b;
    }

    void putdata()
    {
        cout<<"sum of given numbers is: "<<a+b;
    }
};

int main()
{
    add c;
    c.getdata();
    c.putdata();
    getch();
    return 0;
}