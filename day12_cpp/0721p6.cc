#include <iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<string>

using std::vector;
using std::istream;
using std::string;
using std::istringstream;
using std::ifstream;
using std::cout;
using std::endl;

istream& func(istream &is)
{
    string buf;
    while(is>>buf)
    {
        cout<<buf<<endl;
    }
    is.clear();
    return is;
}

int main(int argc,char *argv[])
{
    vector<string> vec;
    string line;
    ifstream f1(argv[1]);  
    while(getline(f1,line))
    {
        vec.push_back(line);
    }
    for(const auto &i:vec)
    {
        istringstream instr(i);
        func(instr);
    }
    return 0;
}
