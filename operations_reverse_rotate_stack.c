/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_reverse_rotate_stack.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 17:23:42 by awsall            #+#    #+#             */
/*   Updated: 2026/06/25 18:16:54 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rra(t_list **stack_a)
{
	t_list	*first;
	t_list	*last;
	t_list	*new

	if (!stack_a || !*stack_a || !(*stak_a)->next)
		return ;
	first = *stack_a;
	*stack_a = first->next;
	while (first->next)
		last = first->next;
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	last = new + 1;

	last = new;
	
	





}
