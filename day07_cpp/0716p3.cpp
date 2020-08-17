#include <iostream>
#define _DEBUG
using namespace std;
int main()
{
    string s,res;
    while(cin>>s)
    {
        for(auto &i:s){
            i=toupper(i);
        }
#ifdef _DEBUG
        if(res.empty())
            res=s;
        else
            res+=" "+s;
    }
#endif
#ifndef _DEBUG
    res+=s;
#endif
    cout<<res<<endl;
    return 0;
}

