#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include<list>
using std::list;

#include<string>
using std::string;

#include<algorithm>

int main()
{
    string recv;
    list<string> lst;
    while(cin>>recv)
    {
        lst.push_back(recv);
    }
    cin.clear();
    cout<<"input the search_value:"<<endl;
    string search_val;
    cin>>search_val;
    auto cnt=count(lst.begin(),lst.end(),search_val);
    cout<<"The count of search_val is :"<<cnt<<endl;
    return 0;
}
