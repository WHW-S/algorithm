#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<string> a;
    string w;
    while(cin>>w){
        a.push_back(w);
    }
    for(auto &i:a){
        for(auto j:i){
            if(isalpha(j)){
                char c=toupper(j);
                cout<<c;
            }
        }
        cout<<endl;
    }
    return 0;
}
