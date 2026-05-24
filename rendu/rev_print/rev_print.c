#include<unistd.h>
void put_char(char c)
{
    write(1, &c, 1);
}
void rev_print(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    i--;
    while(i >= 0)
    {
        put_char(str[i]);
        i--;
    }
}
int main(int c, char **v)
{
    if(c == 2)
        rev_print(v[1]);
    write(1, "\n", 1);
    return(0);
}