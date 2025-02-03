#include "push_swap.h"

void	copy_stack_to_array(t_stack *a, long *arr)
{
	t_node	*current;
	int		i;

	i = 0;
	current = a->top;
	while (i < a->size)
	{
		arr[i] = current->num;
		current = current->next;
		i++;
	}
}

long	find_min_value(long *arr, int size)
{
	long	min_value;
	int		i;

	i = 0;
	min_value = arr[0];
	while (i < size)
	{
		if (arr[i] < min_value)
			min_value = arr[i];
		i++;
	}
	return (min_value);
}

void	adjust_array_values(long *arr, int size, long offset)
{
	int	i;

	i = 0;
	while (i < size)
	{
		arr[i] += offset;
		i++;
	}
}

void	bubble_sort(long *arr, int size)
{
	int		i;
	int		j;
	long	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

long	*prepare_sorted_array(t_stack *a, long *offset)
{
	long	*arr;
	long	min_value;

	arr = malloc(sizeof(long) * a->size);
	if (!arr)
		return (NULL);
	copy_stack_to_array(a, arr);
	min_value = find_min_value(arr, a->size);
	if (min_value < 0)
		*offset = -min_value;
	adjust_array_values(arr, a->size, *offset);
	bubble_sort(arr, a->size);
	return (arr);
}

void	assign_stack_indices(t_stack *a, long *arr, long offset)
{
	t_node	*current;
	int		i;
	int		j;

	i = 0;
	current = a->top;
	while (i < a->size)
	{
		j = 0;
		while (j < a->size)
		{
			if (current->num + offset == arr[j])
			{
				current->index = j;
				break ;
			}
			j++;
		}
		current = current->next;
		i++;
	}
}

void	assign_indices(t_stack *a)
{
	long	*arr;
	long	offset;

	offset = 0;
	arr = prepare_sorted_array(a, &offset);
	if (!arr)
		return ;
	assign_stack_indices(a, arr, offset);
	free(arr);
}

#include "push_swap.h"

int	get_max_bits(int size)
{
	int	max_bits;

	max_bits = 0;
	while (size > 0)
	{
		max_bits++;
		size >>= 1;
	}
	return (max_bits);
}

void	push_elements_based_on_bit(t_stack *a, t_stack *b, int size, int i)
{
	int		j;
	t_node	*current;

	j = 0;
	while (j < size)
	{
		current = a->top;
		if (((current->index >> i) & 1) == 0)
			ft_pb(a, b, 1);
		else
			ft_ra(a, 1);
		j++;
	}
}

void	push_elements_back(t_stack *a, t_stack *b)
{
	while (b->size > 0)
		ft_pa(a, b, 1);
}

void	ft_sort_algo(t_stack *a, t_stack *b)
{
	int	max_bits;
	int	i;
	int	size;

	size = a->size;
	i = 0;
	assign_indices(a);
	max_bits = get_max_bits(size);
	while (i < max_bits)
	{
		push_elements_based_on_bit(a, b, size, i);
		push_elements_back(a, b);
		i++;
	}
}
