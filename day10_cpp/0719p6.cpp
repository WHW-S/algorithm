#include <iostream>
int add(std::initializer_list<int> l)
{
    int sum=0;
    for(const auto &i:l)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    std::cout<<add({1,2,3,4,5})<<std::endl;
    return 0;
}
