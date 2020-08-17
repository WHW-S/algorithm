#include <iostream>
using namespace std;
int main()
{
    string s("hello world");
    for(char &i:s){
        i='X';
    }
    cout<<s<<endl;
    return 0;
}
