/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	my_strlen(char *str);

void	my_putchar(char c);

char	*my_evil_str(char *str)
{
	int	i = 0;
	int	c = 0;
	int	j = my_strlen(str) - 1;
	
	while (i < j) {
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
	return (str);
}
