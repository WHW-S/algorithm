#include <iostream>
#include<vector>
int main()
{
    std::vector<int> a{1,2,3,4,5},b{1,2,3};
    std::vector<int>::iterator it1=a.begin(),it2=b.begin();
    while(it1!=a.end()&&it2!=b.end())
    {
        if(*it1!=*it2)
        {
            std::cout<<"FALSE"<<std::endl;
            return 0;
        }
        ++it1,++it2;
    }
    std::cout<<"TRUE"<<std::endl;
    return 0;
}
