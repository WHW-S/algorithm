#include <iostream>
int main()
{
    int n;
    int myabs(int);
    std::cout<<"请输入一个数字"<<std::endl;
    std::cin>>n;
    int res=myabs(n);
    std::cout<<"绝对值为："<<res<<std::endl;
    return 0;
}
int myabs(int a)
{
    if(a<0)
    {
        a=-a;
    }
    return a;
}
