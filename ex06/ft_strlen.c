/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damangue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 14:10:53 by damangue          #+#    #+#             */
/*   Updated: 2020/07/12 14:25:34 by damangue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_strlen(char *str)
{
int	counter=0;
	
	while(str[counter] )

	{
	 counter++;

	}
	
	 return counter;

  }
