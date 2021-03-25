/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboruah <aboruah@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 02:01:04 by aboruah           #+#    #+#             */
/*   Updated: 2021/03/23 11:29:02 by aboruah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	ch;

	ch = 'N';
	if (n < 0)
	{
		write(1, &ch, 1);
	}
	else
	{
		ch = 'P';
		write(1, &ch, 1);
	}
}
int main(void)
{
	ft_is_negative(-8);
	return 0;
}