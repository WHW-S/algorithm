#include <iostream>
using std::cin;using std::cout;using std::endl;

#include<string>
using std::string;

#include<vector>
using std::vector;

#include<algorithm>

bool judge(const string& s)
{
    return (int)s.size()>=5;
}
int main()
{
    vector<string> vec;
    string tmp;
    while(cin>>tmp)
    {
        vec.push_back(tmp);
    }
    partition(vec.begin(),vec.end(),judge);
    for(const auto &i:vec)
    {
        cout<<i<<endl;
    }
    return 0;
}
