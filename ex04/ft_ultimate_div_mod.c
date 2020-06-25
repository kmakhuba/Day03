/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmakhuba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:09:44 by kmakhuba          #+#    #+#             */
/*   Updated: 2020/06/25 13:11:06 by kmakhuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_ultimate_div_mod(int *div, int *mod)
{
	int tmp;

	tmp = *div;
	*div = (*div / *mod);
	*mod = (tmp % *mod);
}
