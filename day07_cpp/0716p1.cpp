#include <iostream>
#define _DEBUG
using std::string;
using std::cin;
using std::cout;

int main()
{
#ifndef _DEBUG
    string a;
    while(getline(cin,a))
    {
        cout<<a<<std::endl;
    }
#endif
#ifdef _DEBUG
    string word;
    while(cin>>word)
    {
        cout<<word<<std::endl;
    }
#endif
    return 0;
}

