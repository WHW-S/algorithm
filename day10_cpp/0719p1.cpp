#include <iostream>
int main()
{
    int num;
    int fact(int);
    std::cout<<"请输入一个数字："<<std::endl;
    std::cin>>num;
    int res=fact(num);
    std::cout<<num<<"的阶乘为："<<res<<std::endl;
    return 0;
}
int fact(int n)
{
    int temp=1;
    while(n>1)
    {
        temp*=n--;
    }
    return temp;
}
