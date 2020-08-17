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

inline const string& make_plural(size_t count,const string &a,const string &b)
{
    return (count>1)?a:b;
}
void biggies(vector<string> &words,vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(),words.end(),
                [](const string&s1,const string &s2)
                {return s1.size()<s2.size();});
    auto wc=find_if(words.begin(),words.end(),
                    [sz](const string &s)
                    {return s.size()>=sz;});
    auto count=words.end()-wc;
    cout<<count<<" "<<make_plural(count,"words","word")
        <<" of length "<<sz<<" or longer"<<endl;
    for_each(wc,words.end(),[](const string &s)
             {cout<<s<<" ";});
    cout<<endl;
}
int main()
{
    vector<string> vec{"hello","red","butterfly","quick",
        "fox","red","the","over","slow","jumps","quick"};
    biggies(vec,5);
    return 0;
}
