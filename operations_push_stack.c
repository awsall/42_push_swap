/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:58:20 by awsall            #+#    #+#             */
/*   Updated: 2026/06/19 12:14:55 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sa(t_list **stack_a)
{
	int	temp;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	temp = *(int *)(*stack_a)->content; 
	*(int *)(*satck_a)->content = *(int *)(*stack_a)->next->content;
	*(int *)(*stack_a)->next->content = temp;
}

void	sb(t_list **stack_a, t_list **stack_b)
{
	int	temp;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	temp = *(int *)(*stack_b)->content;
	*(int *)(*stack_b)->content = *(int *)(*stack_b)->next->content;
	*(int *)(*stack_b)->next->content = temp;
}

void	ss(t_list **stack_a, t_list **stack_b)
{
		sa(stack_a);
		sb(stack_b);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*move_node;

	if (!stack_b || !stack_a || !*stack_b)
		return ;
	move_node = *stack_b;
	*stack_b = move_node->next;
	move_node->next = *stack_a;
	*stack_a = move_node; 
}	

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*move_node;

	if (!stack_a || !stack_b || !*stack_a)
		return ;
	move_node = *stack_a;
	*stack_a = move_node->next;
	move_node->next = *stack_b;
	*stack_b = move_node;
}	
