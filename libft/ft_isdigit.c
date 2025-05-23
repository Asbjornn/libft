/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:38:26 by gcauchy           #+#    #+#             */
/*   Updated: 2025/04/21 12:38:28 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && '9' >= c)
		return (1);
	return (0);
}

// #include <stdio.h>
// int		main(void)
// {
// 	printf("%d\n", ft_isdigit('0'));
// 	return (0);
// }