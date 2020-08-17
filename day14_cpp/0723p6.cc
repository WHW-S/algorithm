#include <iostream>
using std::cin;using std::cout;using std::endl;

int main()
{
    int a,b;
    cin>>a>>b;
    auto f=[a,b] {return a+b;};
    cout<<"a+b="<<f()<<endl;
    return 0;
}
