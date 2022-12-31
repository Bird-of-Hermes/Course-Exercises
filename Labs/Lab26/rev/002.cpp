int subst(char * str, char c1, char c2)
{
    int Counter = 0;
    while (str)
    {
        if(*str == c1)
        {
        *str = c2;
        Counter++;
        }
        str++;
    }

    return Counter;
}