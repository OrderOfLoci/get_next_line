/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnull <wnull@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:37:38 by wnull             #+#    #+#             */
/*   Updated: 2021/11/25 00:01:55 by wnull            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*extract_line(char *str)
{
	char	*aux;
	int	i;
	int	mem;
	
	mem = ft_strlen_sline(str);
	i = 0;
	if (!str)
		return (NULL);
	aux = (char *)malloc(sizeof(char) * (mem + 1));
	if (!aux)
		return (NULL);
	while (str[i] != '\0' && str[i] != '\n')
	{
		aux[i] = str[i];
		i++;
	}
	aux[i] = '\0';
	//printf("%d", mem);
	return (aux);
}

char	*get_next_line(int fd)
{
	char	*tmp;
	char	*step;
	int		fin;
	
	if (BUFFER_SIZE <= 0)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!tmp)
		return (NULL);
	fin = read(fd, tmp, BUFFER_SIZE);
	tmp[fin] = '\0';
	step = extract_line(tmp);
	//printf("%d", fin);
	
	return (step);
}

int main()
{
	int fda;
	fda = open("hello.txt", O_RDONLY);
	printf("%s", get_next_line(fda));
	printf("\n");
}