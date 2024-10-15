#include <stdio.h>
#include <stdlib.h>


size_t	count_words(char *str, char c)
{
	size_t	i;
	int		mot;

	i = 0;
	mot = 0;
	while (*str)
	{
		if (*str != c && mot == 0)
		{
			mot = 1;
			i++;
		}
		else if (*str == c)
			mot = 0;
		str++;
	}
	return (i);
}

char	*next_wd(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == c)
		i++;
	return (&str[i]);
}

size_t	world_len(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	*ft_split(char *s, char c)
{
	size_t	j;
	size_t	word_count;
	size_t	i;
	size_t	word_len;
	char	**ptr;

	word_count = count_words(s, c);
	i = 0;
	ptr = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!ptr)
		return (NULL);
	while (*s && i < word_count)
	{
		s = next_wd(s, c);
		word_len = world_len(s, c);
		ptr[i] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!ptr[i])
			return (NULL);
		j = 0;
		while (j < word_len)
			ptr[i][j++] = *s++;
		ptr[i++][word_len] = '\0';
	}
	ptr[word_count] = NULL;
	return (ptr);
}

int main() {
    char str[] = "1";
    char delimiter = ' ';
    char **result;
    size_t i;

    result = ft_split(str, delimiter);

    if (result) {
        for (i = 0; result[i] != NULL; i++) {
            printf("Word %zu: %s\n", i, result[i]);
            free(result[i]);
        }
        free(result); 
    } else {
        printf("Erreur lors de la division de la chaîne.\n");
    }

    return 0;
}