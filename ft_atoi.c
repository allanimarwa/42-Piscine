/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallani <mallani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:16:48 by mallani           #+#    #+#             */
/*   Updated: 2022/03/18 14:37:06 by mallani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] != '\0') && ((str[i] == ' ')
			|| ((str[i] >= 9) && (str[i] <= 13))))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		sign = sign * -1;
		i++;
	}
	while ((str[i] != '\0') && (str [i] >= '0') && (str [i] <= '9'))
	{
		result = result * 10 + (str [i] - '0');
		i++;
	}
	return (result * sign);
}
