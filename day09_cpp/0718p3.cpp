#include <iostream>
using namespace std;
int main()
{
    char ch;
    int acnt=0,ecnt=0,icnt=0,ocnt=0,ucnt=0;
    while(cin>>ch)
    {
        ch=tolower(ch);
        if(ch=='a')
        {
            ++acnt;
        }
        if(ch=='e')
        {
            ++ecnt;
        }
        if(ch=='i')
        {
            ++icnt;
        }
        if(ch=='o')
        {
            ++ocnt;
        }
        if(ch=='u')
        {
            ++ucnt;
        }
    }
    cout<<"Number of vowel a:\t"<<acnt<<'\n'
        <<"Number of vowel e:\t"<<ecnt<<'\n'
        <<"Number of vowel i:\t"<<icnt<<'\n'
        <<"Number of vowel o:\t"<<ocnt<<'\n'
        <<"Number of vowel u:\t"<<ucnt<<endl;
    return 0;
}
