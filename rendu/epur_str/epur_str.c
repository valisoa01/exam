#include<unistd.h>
void put_char(char c)
{
    write(1, &c, 1);
}
void epur_str(char *str)
{
    int i;
    int space;

    i = 0;
    space = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ' ' || str[i] == '\t')
            space =1;
        else
            {
                if(space == 1)
                    put_char(' ');
                put_char(str[i]);
                space = 0;
            }
        i++;
    }
}

int main(int c, char **v)
{
    if(c == 2)
        epur_str(v[1]);
    write(1, "\n", 1);
    return (0);
}