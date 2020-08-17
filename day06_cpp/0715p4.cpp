#include <iostream>
using namespace std;
int main()
{
    int i2=1;
    int *const p2=&i2;
    *p2=2;
    const int i=-1,&r=0;
    const int *const p3=&i2;
    const int *p1=&i2;
    p1=&i;
    cout<<i2<<" "<<*p2<<" "<<*p1<<endl;
    return 0;
}

