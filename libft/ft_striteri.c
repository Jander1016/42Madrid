/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 02:54:24 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/03/11 07:39:33 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!*s || !*f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*#include <ctype.h>
void    to_upper(unsigned int i, char *s)
{
	i = 0;
	*s = toupper(*s);
}
int main()
{
	char s[] = "hola mundo";
	ft_striteri(s, to_upper);
	return 0;
}*/