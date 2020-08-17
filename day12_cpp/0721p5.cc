#include <iostream>
#include<sstream>

using std::istream;
using std::string;
using std::istringstream;
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

int main()
{
    std::string s("hello world");
    istringstream istr(s);
    func(istr);
    return 0;
}
