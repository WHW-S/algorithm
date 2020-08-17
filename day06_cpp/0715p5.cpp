#include <iostream>
using namespace std;
int main()
{
    const int v2=0,i=1;
    int v1=v2;
    int *p1=&v1,&r1=v1;
    const int *p2=&v2,*const p3=&i,&r2=v2;
    r1=r2;
    p1=p2;//error assigning to 'int *' from incompatible type 'const int *'
    p2=p1;
    p1=p3;//error  assigning to 'int *' from incompatible type 'const int *const'
    p2=p3;
    return 0;
}

