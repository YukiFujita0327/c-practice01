/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 03:41:48 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/12 20:46:03 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int input)
{
	if (input < 0)
	{
		write(1, &"N", 1);
	}
	else
	{
		write(1, &"P", 1);
	}
}
