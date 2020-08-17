#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include<string>
using std::string;

#include<deque>
using std::deque;

int main()
{
    string word;
    deque<string> que;
    while(cin>>word)
    {
        que.emplace_back(word);
    }
    for(const auto &i:que)
    {
        cout<<i<<endl;
    }
    return 0;
}

