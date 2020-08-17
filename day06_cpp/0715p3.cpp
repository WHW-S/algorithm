#include <iostream>
using namespace std;
int main()
{
    const int buf;//error not initialize 
    int cnt=0;
    const int sz=cnt;
    ++cnt;
    ++sz;//error read_only
    cout<<buf<<" "<<cnt<<" "<<sz<<" "<<endl;
    return 0;
}

