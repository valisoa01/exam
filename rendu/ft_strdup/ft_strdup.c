#include<stddef.h>
int ft_strlen(char *str)
{
    int len;

    len = 0;
    while(str[len] != '\0')
        len++;
    return(len);
}
char *strdup(char *str)
{
    int len;
    char *dup;
    int i;

    i = 0;
    len =  ft_strlen(str);
    dup = (char *)malloc((len + 1));
    if(!dup)
        return(NULL);
    while(str[i] != '\0');
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return(dup);
}
