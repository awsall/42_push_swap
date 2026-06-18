/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:58:20 by awsall            #+#    #+#             */
/*   Updated: 2026/06/18 16:39:25 by awsall           ###   ########.fr       */
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

void	ft_lstadd_front(t_list **lst, t_list *new);

void	pa(t_list **stack_a, t_list **stack_b)
{
	if (!*stack_b)
		return ;
	int	move_node;

	move_node = *(int *)(*stack_b);
	
	
}	
	
