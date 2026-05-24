#include<unistd.h>
 
void rot_13(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
        else if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = ((str[i] - 'a' + 13 ) % 26) + 'a';
        write(1, &str[i], 1);
        i++;
    }
}