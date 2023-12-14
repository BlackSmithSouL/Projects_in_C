#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	if (src == NULL)
		return (0);
	size_t	length = 0;
	const char	*temp = src;

	while (*temp != '\0')
	{
		++length;
		++temp;
	}
	char	*duplicate = (char *)malloc(length + 1);

	if (duplicate != NULL)
	{
		const char	*srcTemp = src;
		char	*dupTemp = duplicate;
		
		while (*srcTemp != '\0')
		{
			*dupTemp = *srcTemp;
			srcTemp++;
			dupTemp++;
		}
		*dupTemp = '\0';
	}
	return (duplicate);
}
/*
int	main()
{
	char	*org = "Hello World";
	char *dup = ft_strdup(org);

	printf("%s", dup);
	free(dup);
	
}*/
