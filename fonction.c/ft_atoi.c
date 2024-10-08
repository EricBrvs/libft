int ft_atoi(char *str)
{
    int i;
    int result;
    int negatif;

    i = 0;
    result = 0;
    negatif = 1;

    while((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            negatif = -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * negatif);
}