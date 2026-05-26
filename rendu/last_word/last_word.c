#include<unistd.h>
void put_char(char c)
{
    write(1, &c, 1);
}
void last_word(char *str)
{
    int i;
    int start;

    i = 0;
    while(str[i] != '\0')
        i++;
    
    i--;
    while(str[i] == ' ' || str[i] == '\t')
        i--;
    start = i;
    while(start >= 0 && str[start] != ' ' && str[start] != '\t' )
        start--;
    while(start <= i)
    {
        put_char(str[start]);
        start++;
    }
}
int main(int c, char **v)
{
    if(c == 2)
        last_word(v[1]);
    write(1, "\n", 1);
    return(0);
}