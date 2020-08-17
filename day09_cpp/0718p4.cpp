#include <iostream>
int main()
{
    std::string s;
    unsigned spacecnt=0,vowelcnt=0,tablecnt=0,linecnt=0;
    while(getline(std::cin,s))
    {
        for(const auto &ch:s){
            switch(ch)
            {
            case ' ':
                ++spacecnt;
                break;
            case '\t':
                ++tablecnt;
                break;
            case '\n':
                ++linecnt;
                break;
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++vowelcnt;
            }
        }
        ++linecnt;
    }
    std::cout<<"Number of  vowel is\t"<<vowelcnt<<std::endl;
    std::cout<<"Number of space is\t"<<spacecnt<<std::endl;
    std::cout<<"Number of tablecnt is\t"<<tablecnt<<std::endl;
    std::cout<<"Number of linecnt is\t"<<linecnt<<std::endl;
    return 0;
}
