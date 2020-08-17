#include <iostream>
#include<string>
inline bool isShorter(const std::string &s1,const std::string &s2)
{
    return s1.size()<s2.size();
}
int main()
{
    std::string s1("hello s"),s2("hi w");
    if(isShorter(s1,s2))
    {
        std::cout<<"s1 is shorter"<<std::endl;
    }
    else
    {
        std::cout<<"s2 is shorter"<<std::endl;
    }
    return 0;
}
