#include<unistd.h>
void put_char(char c)
{
	write(1, &c, 1);
}
void snake_to_camel(char *str)
{
	int i;
	int c;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == '_')
		{
			i++;
			if(str[i])
				put_char(str[i] - 32);
		}
		else
			put_char(str[i]);
		i++;
		
	}
}
int main(int c, char **v)
{
	if(c == 2)
		snake_to_camel(v[1]);
	write(1, "\n", 1);
	return(0);
}