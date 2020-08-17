#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include<vector>
using std::vector;

#include<algorithm>

int main()
{
    int recv=0;
    vector<int> vec;
    while(cin>>recv)
    {
        vec.push_back(recv);
    }
    cin.clear();
    cout<<"input the search_value"<<endl;
    int search_val=0;
    cin>>search_val;
    auto cnt=count(vec.begin(),vec.end(),search_val);
    cout<<"The count of search_val is :"<<cnt<<endl;
    return 0;
}
