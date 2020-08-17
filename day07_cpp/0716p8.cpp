#include <iostream>
#include<string>
using namespace std;
int main()
{
    string line;
    while(getline(cin,line)){
        if(!line.empty()){
            for(auto i:line){
                if(islower(i))
                    i=toupper(i);
                cout<<i;
            }
            cout<<endl;
        }
        else break;
    }
    return 0;
}
