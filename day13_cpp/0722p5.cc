#include <iostream>
using std::cout;
using std::endl;

#include<vector>
using std::vector;

#include<list>
using std::list;

int main()
{
    vector<int> a{1,3,3,4,5,6};
    list<int> b{1,3,3,4,3};
    vector<int>::const_iterator i=a.cbegin();
    list<int>::const_iterator j=b.cbegin();
    while(i!=a.cend()&&j!=b.cend())
    {

        if(*i<*j)
        {
            cout<<"a小于b"<<endl;
            return 0;
        }
        else if(*i>*j)
        {
            cout<<"a大于b"<<endl;
            return 0;
        }
        ++i;
        ++j;
    }
    if(i==a.cend())
    {
        cout<<"a小于b"<<endl;
    }
    else if(j==b.cend())
    {
        cout<<"a大于b"<<endl;
    }
    else
    {
        cout<<"a等于b"<<endl;
    }
    return 0;
}
