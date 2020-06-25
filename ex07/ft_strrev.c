/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmakhuba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:25:56 by kmakhuba          #+#    #+#             */
/*   Updated: 2020/06/25 13:26:05 by kmakhuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	swap;

	len = 0;
	i = 0;
	while (str[len + 1] != '\0')
		len++;
	while (i < (len - i))
	{
		swap = str[i];
		str[i] = str[len - i];
		str[len - i] = swap;
		i++;
	}
	return (str);
}



