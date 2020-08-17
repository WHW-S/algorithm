#include <iostream>
using std::cout;
using std::endl;

#include<vector>
using std::vector;

#include<list>
using std::list;
using std::begin;
using std::end;

int main()
{
    int a[]={0,1,1,2,3,5,8,13,21,55,89};
    vector<int> vec(begin(a),end(a));
    list<int> l(begin(a),end(a));
    auto i=vec.begin();
    while(i!=vec.end())
    {
        if((*i)&1)
        {
            ++i;
        }
        else
        {
           i=vec.erase(i);
        }
    }
    auto j=l.begin();
    while(j!=l.end())
    {
        if((*j)&1)
        {
            j=l.erase(j);
        }
        else
        {
            ++j;
        }
    }
    for(const auto &i:vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(const auto &i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
