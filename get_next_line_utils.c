/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnull <wnull@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:38:04 by wnull             #+#    #+#             */
/*   Updated: 2022/01/03 15:57:50 by wnull            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "get_next_line.h"

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
    while (str[i] && str[i] != '\n')
		i++;
    return (i);
}

char	*ft_line_eraser(char *str)
{
	int		i;
	int		j;
	char	*aux;

	i = ft_strlen_sline(str);
	j = 0;
	if (!str)
	{
		free (str);
		return (NULL);
	}
	aux = (char *)malloc(sizeof(char) * ((ft_strlen(str)) - i + 1));
	if (!aux)
		return (NULL);
	i++;
	while (str[i])
	{
		aux[j] = str[i];
		j++;
		i++;
	}
	aux[j] = '\0';
	free(str);
	return (aux);
}
/*
int main()
{
	int 	fda;
	char	*tmp;
	tmp = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	fda = open("hello.txt", O_RDONLY);
	read(fda, tmp, BUFFER_SIZE);
	printf("%s", tmp);
	printf("\n\n");
	printf("%s", ft_line_eraser(tmp));
	printf("\n");
}*/
