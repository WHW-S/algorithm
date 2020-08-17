#include <iostream>
using std::cout;using std::endl;

#include<bitset>

int main(int argc,char **argv)
{
    unsigned bp=2|(11<<2)|(1<<5)|(1<<8)|(1<<13)|(1<<21);
    std::bitset<32> bv(bp);
    cout<<bv<<endl;

    std::bitset<32> bvl;
    bvl.set(1);bv.set(2);bvl.set(3);bvl.set(5);
    bvl.set(8);bvl.set(13);bvl.set(21);
    cout<<bvl<<endl;

    return 0;
}
