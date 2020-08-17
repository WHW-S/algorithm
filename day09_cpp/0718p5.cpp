#include <iostream>
int main()
{
    int f=0,l=0,i=0;
    char ch;
    std::string line;
    while(getline(std::cin,line))
    {
        for(std::string::iterator it=line.begin();it!=line.end()-1;++it)
        {
        if(*it!='f')
            continue;
        ch=*(it+1);
        switch(ch)
        {
        case 'f':
            ++f;
            break;
        case 'l':
            ++l;
            break;
        case 'i':
            ++i;
        }
    }
    }
    std::cout<<"Number of ff is:\t"<<f<<std::endl;
    std::cout<<"Number of fl is:\t"<<l<<std::endl;
    std::cout<<"Number of fi is:\t"<<i<<std::endl;
    return 0;
}
