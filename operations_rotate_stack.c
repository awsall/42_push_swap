/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate_stack.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 12:17:14 by awsall            #+#    #+#             */
/*   Updated: 2026/06/25 17:22:10 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ra(t_list **stack_a)
{
	t_list	*first;
	t_list	*last;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	first = *stack_a;
	*stack_a = first->next;
	last = *stack_a;
	while(last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
}

void	rb(t_list **stack_b)
{
	t_list	*first;
	t_list	*last;
	
	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	first = *stack_b;
	*stack_b = first->next;
	last = *stack_b;
	while(last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}


