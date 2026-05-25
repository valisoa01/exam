#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int do_op(int a, char op, int  b)
{
    int result;

    result = 0;
    if(op == '*')
        result = (a * b);
    else if(op == '+')
        result = a + b;
    else if(op == '-')
        result = a - b;
    else if(op == '/')
        result = a / b;
    else if(op == '%')
        result = a % b;
    return (result);

}
int main(int c, char **v)
{
    int a;
    int b;

    a = atoi(v[1]);
    b = atoi(v[3]);

    if(c == 4)
        printf("%i", do_op(a, v[2][0], b));

    printf("\n");
    return(0);
}