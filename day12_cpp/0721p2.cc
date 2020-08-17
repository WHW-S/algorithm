#include <iostream>
#include<fstream>
#include<string>
#include<vector>

using std::string;
using std::vector;
using std::ifstream;

int main(int argc,char *argv[])
{
    vector<string> vec;
    ifstream in(argv[1]);
    if(in)
    {
        string buf;
        while(getline(in,buf))
        {
            vec.push_back(buf);
        }
    }
    else
    {
        std::cerr<<"cannot open the file:"<<argv[1]<<std::endl;
    }
    for(const auto &i:vec)
    {
        std::cout<<i<<std::endl;
    }
    return 0;
}
