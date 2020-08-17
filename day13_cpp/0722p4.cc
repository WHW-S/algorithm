#include <iostream>
using std::cout;
using std::endl;

#include<vector>
using std::vector;

int main()
{
    vector<int> a{1,3,3,4,5,6};
    vector<int> b{1,3,3,4,3};
    if(a==b)
    {
        cout<<"a等于b"<<endl;
    }
    else if(a<b)
    {
        cout<<"a小于b"<<endl;
    }
    else
    {
        cout<<"a大于b"<<endl;
    }
    return 0;
}
