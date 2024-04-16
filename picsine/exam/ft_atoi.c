int is_space(char s)
{
    if(s == ' ' || s== '\n' || s == '\f' || s == '\t' || s == '\v')
        return(1);
    return(0);
}

int nbr(char n)
{
    if(n >= '0' || n <= '9')
        return(1);
    return(0);
}

int ft_atoi(char *str)
{
    int i = 0;
    int pm = 1;
    int re = 0;

    while(is_space(str[i]))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            pm = -1;
        i++;
    }
    while(nbr(str[i]))
    {
        re = re * 10;
        re = re + str[i] - '0';
        i++;
    }
    re = re * pm;
    return(re);
}