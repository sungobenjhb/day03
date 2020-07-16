/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungoben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:45:55 by sungoben          #+#    #+#             */
/*   Updated: 2020/07/13 13:13:34 by sungoben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */#include <unistd.h>
void ft_ultimate_div_mod(int *a ,int *b)
{
	int save1;
	int save2;
	save1 = a / b;
	save2 =a % b;
	*a = save1;
	*b = save2;
}




