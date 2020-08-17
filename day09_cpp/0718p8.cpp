#include <iostream>
#include<stdexcept>
int main()
{
    int a=0,b=1;
    do{
        try  
        {
            if(a==0) throw std::runtime_error("除数不能为零！");
            std::cout<<static_cast<double>(a)/b<<std::endl;
        }
        catch (std::runtime_error err)
        {
            std::cout<<err.what()
                <<"\nTry Again? Enter y or n"<<std::endl;
            char c;
            std::cin>>c;
            if(!std::cin||c=='n')
                break;
        }
    }while(std::cin>>a>>b);
    return 0;
}

