#include <iostream>
using std::cout;using std::cin;using std::endl;

#include<vector>
using std::vector;

#include<algorithm>

#include"Sales_data.h"

bool cmp(const Sales_data& a,const Sales_data& b)
{
    return a.isbn()<b.isbn();
}
int main()
{
    vector<Sales_data> vec;
    Sales_data tmp;
    while(read(cin,tmp))
    {
        vec.push_back(tmp);
    }
    sort(vec.begin(),vec.end(),cmp);
    for(const auto &i:vec)
    {
        print(cout,i);
    }
    return 0;
}

