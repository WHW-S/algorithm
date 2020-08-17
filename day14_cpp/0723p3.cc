#include <iostream>
#include<algorithm>
#include<string>
#include<vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

void elimDups(vector<string> &words)
{
    sort(words.begin(),words.end());
    auto end_unique=unique(words.begin(),words.end());
    words.erase(end_unique,words.end());
}

bool isShorter(const string &s1,const string &s2)
{
    return s1.size()<s2.size();
}

int main()
{
    vector<string> vec{"hello","fox","red","the","over","slow","jumps","quick"};
    elimDups(vec);
    stable_sort(vec.begin(),vec.end(),isShorter);
    for(const auto &s:vec)
    {
        cout<<s<<" ";
    }
    cout<<endl;
    return 0;
}
