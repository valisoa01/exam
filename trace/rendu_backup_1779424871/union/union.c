#include<unistd.h>

void ft_union(char *str, int *seen)
{
	int i;

	while(str[i] != '\0')
	{
		if(!seen[(unsigned char)str[i]])
		{
			seen[(unsigned char)str[i]] = 1;
			wrtie(1, &str[i], 1);
		}
		i++;
	}
}
int main(int c, char **v)
{
	int seen[256]= {0};
	if(c == 3)
	{
		ft_union(v[1], seen);
		ft_union(v[2], seen);
	}
	write(1, "\n", 1);
	return(0);
}