#include <iostream>
using std::cout;using std::endl;

#include<vector>
using std::vector;

bool findx(vector<int>::const_iterator begin,vector<int>::const_iterator end,int x)
{
    while(begin<end)
    {
        if(*begin==x)
        {
            return true;
        }
        ++begin;
    }
    return false;
}
int main()
{
    vector<int> vec{1,2,5,6,7,9,12,15,16,13,20};
    vector<int>::const_iterator start=vec.begin()+2;
    vector<int>::const_iterator end=vec.end();
    if(findx(start,end,12))
    {
        cout<<"EXIST"<<endl;
    }
    else
    {
        cout<<"NO EXIST"<<endl;
    }
    return 0;
}

