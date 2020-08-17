#include <iostream>

using std::istream;
using std::string;
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
    func(std::cin);
    cout<<std::cin.rdstate()<<endl;
    return 0;
}
