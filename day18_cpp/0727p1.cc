#include <iostream>
using std::cin;using std::cout;using std::endl;

#include <string>
using std::string;

#include <map>
using std::map;

#include<cctype>

#include<algorithm>

int main()
{
    map<string,size_t> word_count;
    string word;
    while(cin>>word)
    {
        for(auto &ch: word)
        {
            if(isupper(ch))
            {
                ch=tolower(ch);
            }
        }
        word.erase(remove_if(word.begin(),word.end(),ispunct),word.end());

    }
    return 0;
}
