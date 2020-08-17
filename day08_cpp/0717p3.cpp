#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a{0,1,2,3,4,5,6,7,8,9};
    cout<<"The origin vector:";
    for(const auto &i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"After change vector:";
    for(auto &i:a){
        cout<<(i=i%2?2*i:i)<<" ";
    }
    cout<<endl;
    return 0;
}

