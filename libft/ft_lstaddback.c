/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olboothe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 03:42:12 by olboothe          #+#    #+#             */
/*   Updated: 2019/04/07 03:44:35 by olboothe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list **alst, t_list *new)
{
	t_list *tmp;
	t_list *head;

	tmp = *alst;
	head = tmp;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	*alst = head;
}
