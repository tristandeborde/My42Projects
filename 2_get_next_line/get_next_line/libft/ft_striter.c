/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeborde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:17:36 by tdeborde          #+#    #+#             */
/*   Updated: 2017/11/13 11:20:10 by tdeborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			(*f)(&s[i]);
			i++;
		}
	}
}
