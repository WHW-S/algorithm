#include <iostream>
using std::cout;
using std::endl;

#include<list>
using std::list;

#include<deque>
using std::deque;

int main()
{
    list<int> l{1,2,3,4,5,6,7,8,9,10};
    deque<int> d1,d2;
    for(const auto &i:l)
    {
        if(i&1)
        {
d1.push_back(i);
        }
        else
        {
            d2.push_back(i);
        }
    }
    for(const auto &i:d1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(const auto &i:d2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}

