#include<unistd.h>
void wdmatch(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(s1[i] &&s2[j])
    {
        if(s1[i] == s2[j])
            i++;
        j++;
    }
    if(s1[i] == '\0')
        write(1, s1, i);
}
int main(int c, char **v)
{
    if(c == 3)
        wdmatch(v[1], v[2]);
    write(1, "\n", 1);
    return(0);
}