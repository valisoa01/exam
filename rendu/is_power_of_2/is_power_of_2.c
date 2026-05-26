int is_power_of_2(unsigned int n)
{

    if(n == 0)
        return(0);
    while(n % 2 == 0)
        n /= 2;
    return(n == 1);

}
#include<stdio.h>
int main(void)
{
    int n = 3;
    int func;
    func = is_power_of_2(n);
    printf("%d\n", func);
    return(0);
}