/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/
void	my_swap(int *, int *);

void		my_sort_in_array(int *array, int size)
{
	int	i = 0;
	int	j = 0;
	while(array[i] != '\0') {
		while (j < size) {
			j++;
			if (array[j] > array[j + 1])
				my_swap(&i, &j);
		}
		i++;
	}
}
