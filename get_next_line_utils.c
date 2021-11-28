/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnull <wnull@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:38:04 by wnull             #+#    #+#             */
/*   Updated: 2021/11/25 00:00:05 by wnull            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

int	ft_strlen_sline(char *str)
{
    int	i;
    
    i = 0;
    while (str[i] != '\0' && str[i] != '\n')
		i++;
    return (i);
}
