#include <iostream>
using std::cout;using std::endl;

int main()
{
    int local_int;
    cout<<local_int<<endl;
    int *pil=new int;//初始化了为0；
    cout<<*pil<<endl;
    delete pil;
    return 0;
}

