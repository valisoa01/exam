#include<stddef.h>
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i]!= '\0')
    {
        i++;
    }
    return(i);
}
char ft_strdup(char *str)
{
    char *dup;
    int i;
    int len;

    i = 0;
    len = ft_strlen(str);
    dup = (char *)malloc(len + 1);
    if(!dup)
        return(NULL);
    while(str[i] != '\0')
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return(dup);
}