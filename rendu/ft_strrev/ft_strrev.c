
char    *ft_strrev(char *str)
{
    int i;
    int j;
    char tmp;

    i = 0;
    j = 0;
    while(str[j] != '\0')
        j++;
    j--;
    while(i < j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    return(str);
}
