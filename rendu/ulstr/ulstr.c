#include<unistd.h>
void put_char(char c)
{
    write(1, &c, 1);
}
void ulstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            put_char(str[i] + 32);
        else if(str[i] >= 'a' && str[i] <= 'z')
            put_char(str[i] - 32);
        else
            write(1, &str[i], 1);
        i++;
    }
}
int main(int c, char **v)
{
    if(c == 2)
        ulstr(v[1]);
    put_char('\n');
    return(0);
}