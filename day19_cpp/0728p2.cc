#include <iostream>
using std::cout;using std::endl;using std::cin;

#include <vector>
using std::vector;

vector<int> *new_vector(void)
{
    return new (std::nothrow) vector<int>;
}

void read_ints(vector<int> *pv)
{
    int n;
    while(cin>>n)
    {
        pv->push_back(n);
    }
}

void print_ints(vector<int> *pv)
{
    for(const auto &i:*pv)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    auto *p=new_vector();
    if(!p)
    {
        cout<<"no enough memory"<<endl;
        return -1;
    }
    read_ints(p);
    print_ints(p);
    return 0;
}

