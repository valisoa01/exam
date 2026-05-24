#include<unistd.h>
void put_char(char c)
{
    write(1, &c, 1);
}

void rotone(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == 'z')
            put_char('a');
        else if(str[i] == 'Z')
            put_char('Z');
        else if(str[i] >= 'A' && str[i] <= 'Y')
            put_char(str[i] + 1);
        else if(str[i] >= 'a' && str[i] <= 'y')
            put_char(str[i] + 1);
        else
            write(1, &str[i], 1);
        i++;
    }
}
int main(int c, char **v)
{
    if(c == 2)
        rotone(v[1]);
    write(1, "\n", 1);
    return(0);
}