#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include<string>
using std::string;

#include<list>
using std::list;

int main()
{
    string word;
    list<string> l;
    while(cin>>word)
    {
        l.emplace_back(word);
    }
    for(const auto &i:l)
    {
        cout<<i<<endl;
    }
    return 0;
}

