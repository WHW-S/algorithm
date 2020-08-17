#include <iostream>
using std::cin;using std::cout;using std::endl;

#include<memory>
using std::shared_ptr;

#include<vector>
using std::vector;

shared_ptr<vector<int>> new_vector(void)
{
    return std::make_shared<vector<int>> ();
}

void read_ints(shared_ptr<vector<int>> pv)
{
    int n;
    while(cin>>n)
    {
        pv->push_back(n);
    }
}

void print_ints(shared_ptr<vector<int>> pv)
{
    for(const auto &i:*pv)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    auto p=new_vector();
    read_ints(p);
    print_ints(p);
    return 0;
}

