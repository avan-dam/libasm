/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libasm.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/29 13:41:43 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/07/03 16:44:42 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <strings.h>
# include <errno.h> 

size_t	    ft_strlen(const char *s);
int         ft_strcmp(const char *s1, const char *s2);
char        *ft_strcpy(char *dst, const char *src);
ssize_t     ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t     ft_read(int fildes, void *buf, size_t nbyte);
char        *ft_strdup(const char *s1);

#endif
