/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_internals.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 09:25:13 by mbatty            #+#    #+#             */
/*   Updated: 2025/11/20 09:35:18 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_INTERNALS_H
# define LIST_INTERNALS_H

# include "list.h"

typedef struct	s_list_node
{
	struct s_list_node	*next;
	void					*data;
}	t_list_node;

int	list_node_size(t_list_node *nodes);

t_list_node	*list_node_last(t_list_node *nodes);

t_list_node	*list_node_new(void *data);

#endif
