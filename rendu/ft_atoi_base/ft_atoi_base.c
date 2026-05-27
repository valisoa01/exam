int	value(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}

	while (value(*str) >= 0 && value(*str) < str_base)
	{
		result = result * str_base + value(*str);
		str++;
	}
	return (result * sign);
}