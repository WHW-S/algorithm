#include <iostream>
int main()
{
    std::string str1,str2;
    unsigned tmp=1,max_rep=1;
    if(!(std::cin>>str1))
    {
        std::cout<<"No continuous word\n";
        return 0;
    }
    while(std::cin>>str2)
    {
        if(str1==str2)
        {
            ++tmp;
            max_rep=tmp>max_rep?tmp:max_rep;
        }
        else
        {
            tmp=1;
        }
        str1=str2;
    }
    std::cout<<"The max umber of repeat word is:\t"<<max_rep<<std::endl;
    return 0;
}
