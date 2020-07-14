/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungoben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 15:17:19 by sungoben          #+#    #+#             */
/*   Updated: 2020/07/12 15:28:57 by sungoben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>

void ft_swap (int *a,int *b)
{
    int save;

    save = *a;
    *a = *b;
    *b = save;

}

int main()
{
    int n1;
    int n2;

    n1 = 6;
    n2 = 3;

    printf("%d%d\n" n1, n2);
    ft_swap(&n1,&n2);
    printf("%d%d\n" n1, n2);
    return 0;
}
