int fact(int num)
{
    int tmp=1;
    while(num>1)
    {
        tmp*=num--;
    }
    return tmp;
}
