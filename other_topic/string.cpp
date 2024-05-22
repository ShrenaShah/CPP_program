#include<iostream>
using namespace std;

int main()
{
    string s;

    cout<<"Enter a string: ";
    getline(cin,s);

    cout<<"entered string is: "<<s<<endl;

    s.push_back('7'); //for adding any chracter in the end
    cout<<"after using push back "<<s<<endl;

    s.pop_back();//for removing any character in the end
    cout<<"after using pop back "<<s<<endl;

    return 0;
}