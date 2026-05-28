#include<unistd.h>
int ft_atoi(char *str)
{
    int i;
    int result;

    i = 0;
    result = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result*10 + (str[i] - '0');
        i++;
    }
    return(result);
}
void put_nbr(int c)
{
    char *decimal;

    decimal = "0123456789";

    if(c > 9)
        put_nbr(c/ 10);
    write(1, &decimal[c % 10], 1);
}
int is_prime(int n)
{
    int i;

    i = 2;

    if(n < 2)
        return(0);
    while( i < n)
    {
        if(n % i == 0)
            return(0);
        i++;
    }
    return(1);
}
void add_prime_sum(int n)
{
    int i;
    int sum;

    i = 2;
    sum = 0;
    while( i <= n)
    {
        if(is_prime(i))
            sum += i;
        i++;
    }
    put_nbr(sum);
}
int main(int c, char **v)
{
    if(c == 2)
        add_prime_sum(ft_atoi(v[1]));
    write(1, "\n", 1);
    return(0);
}