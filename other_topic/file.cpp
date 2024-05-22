#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    ofstream writefile("book");
    writefile<<"this is file class";
    writefile.close();

    string text;

    ifstream readfile("book");
    while(getline(readfile,text))
    {
        cout<<text;
    }
    readfile.close();

    return 0;
}