/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 08:43:57 by mbatty            #+#    #+#             */
/*   Updated: 2025/11/21 08:49:45 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

bool	comp(int d1, int d2)
{
	return (d1 == d2);
}

void	print(int d)
{
	printf("%d ", d);
}

int	main(void)
{
	t_list	vec;
	int			arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};

	list_new(&vec);
	list_add_back(&vec, arr[0]);
	list_add_back(&vec, arr[1]);
	list_add_back(&vec, arr[2]);
	list_add_back(&vec, arr[3]);
	list_add_back(&vec, arr[4]);
	list_add_back(&vec, arr[5]);
	list_delete_node(&vec, arr[1], comp, false);
	printf("%lu\n", vec.size);
	
	list_for_each(&vec, print);
	printf("\n");

	list_add_back(&vec, arr[7]);
	list_for_each(&vec, print);
	printf("\n");

	int	*arr2 = list_to_array(&vec);
	printf("%d ", arr2[0]);
	printf("%d ", arr2[1]);
	printf("%d ", arr2[2]);
	printf("%d\n", arr2[3]);
	free(arr2);

	list_delete(&vec, false);
}
