#include <iostream>
using std::cout;
using std::ends;

#include<list>
using std::list;

#include<vector>
using std::vector;

int main()
{
    list<int> l(10,1);
    vector<double> vec1(l.begin(),l.end());
    for(const auto &i: vec1)
    {
        cout<<i<<" "<<ends;
    }
    cout<<std::endl;
    vector<int> vec(10,2);
    vector<double> vec2(vec.begin(),vec.end());
    for(const auto &i: vec2)
    {
        cout<<i<<" "<<ends;
    }
    cout<<std::endl;
    return 0;
}

