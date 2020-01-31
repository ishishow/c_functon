int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!ft_strlen(to_find))
		return (str);
	while (*str)
	{
		i = 0;
		while (to_find[i] && str[i])
		{
			if (to_find[i] != str[i])
				break ;
			i++;
		}
		if (i == ft_strlen(to_find))
			return (str);
		str++;
	}
	return (str);
}