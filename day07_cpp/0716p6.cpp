#include <iostream>
using namespace std;
int main()
{
    string s("After rain,what a beautiful world!!!");
    for(const auto &i:s){
        if(!ispunct(i)){
            cout<<i;
        }
    }
    return 0;
}

