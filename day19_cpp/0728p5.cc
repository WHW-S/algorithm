#include <iostream>
using std::cout;using std::endl;

#include<memory>

struct destination {};
struct connection {};
connection connect(destination *pd)
{
    cout<<"打开连接"<<endl;
    return connection();
}

void disconnect(connection c)
{
    cout<<"关闭连接"<<endl;
}

void f(destination &d)
{
    cout<<"直接管理connection"<<endl;
    connection c=connect(&d);
    cout<<endl;
}

void f1(destination &d)
{
    cout<<"用shared_ptr管理connect"<<endl;
    connection c=connect(&d);
    std::shared_ptr<connection> p(&c,[](connection *P){ disconnect(*P); });

    cout<<endl;
}
int main()
{
    destination d;
    f(d);
    f1(d);
    return 0;
}

