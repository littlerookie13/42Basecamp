/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucusi <llucusi@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 06:51:04 by llucusi           #+#    #+#             */
/*   Updated: 2021/04/03 07:13:27 by llucusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_numbers(void);

int main(void)
{
	ft_print_numbers();	
};

void ft_print_numbers(void)
{
	int n = 47;
	while(n < 57)
	{
		n++;
		write(1, &n,1);
	}
};