#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s("hello world!");
    for(auto &i:s){
        i='X';
    }
    cout<<s<<endl;
    return 0;
}

