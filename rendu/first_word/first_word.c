#include<unistd.h>
void put_char(char c)
{
    write(1, &c, 1);
}
void first_word(char *str)
{
    int i;

    i = 0;
    while(str[i] == ' ' || str[i] == '\t')
        i++;
    while(str[i] != ' ')
    {
        put_char(str[i]);
        i++;
    }
}
int main(int c, char **v)
{
    if(c == 2)
        first_word(v[1]);
    put_char('\n');
    return(0);
}
