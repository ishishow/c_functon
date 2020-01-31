
char	*ft_strcat(char *dest, char *src)
{
	char	*dest_head;

	dest_head = dest;
	while (*dest)
		dest++;
	while (*src)
		*(dest++) = *(src++);
	*dest = '\0';
	return (dest_head);
}