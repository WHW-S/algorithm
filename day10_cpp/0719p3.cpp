#include <iostream>
int ret_static()
{
    static size_t ctr=0;
    return ctr++;
}
int main()
{
    for(int i=0;i<10;++i)
    {
        std::cout<<ret_static()<<std::endl;
    }
    return 0;
}
