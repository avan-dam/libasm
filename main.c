/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/29 13:34:22 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/07/03 16:50:35 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void    ft_strdup_test()
{
    char	*s3 = strdup("");
	char	*s4 = ft_strdup("");
	printf("REAL: strdup = '%s'\n", s3);
	printf("MINE: ft_strdup = '%s'\n", s4);
    if ((strcmp(s3, s4) == 0))
	    printf("%sOKAY YES :D\n", "\x1B[32m");
	else
        printf("%sNO SORRY :(\n", "\x1B[31m");
	printf("\x1B[0m");
    char	*s5 = strdup("THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING ");
	char	*s6 = ft_strdup("THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING THIS IS  A REALLY LONG STRING ");
	printf("REAL: strdup = '%s'\n", s5);
	printf("MINE: ft_strdup = '%s'\n", s6);
    if (strcmp(s5, s6) == 0)
	    printf("%sOKAY YES :D\n", "\x1B[32m");
	else
        printf("%sNO SORRY :(\n", "\x1B[31m");
	printf("\x1B[0m");
}

void    ft_read_test_4(long int ret1, char *string, int err1)
{
    int			fd;
    long int	ret2;
    char		buf[200];
    size_t		nbytes;
    ssize_t		bytes_read;
    int         err2;

    err2 = -200;
    nbytes = sizeof(buf);
	bzero(buf, 200);
    fd = open("wrong.txt", O_RDONLY);
    printf("MINE: reads this from file\n");
    ret2 = ft_read(fd, buf, nbytes);
    printf("string read = %s\n", buf);
    printf("ft_read returns = %ld\n", ret2);
    if (ret1 == -1)
    {
        err2 = errno;
        printf("errno = %d\n", errno);
    }
    close(fd);
    if (ret1 == ret2 && (strcmp(string, buf) == 0) && (err1 == err2))
	    printf("%sOKAY YES :D\n", "\x1B[32m");
	else
        printf("%sNO SORRY :(\n", "\x1B[31m");
	printf("\x1B[0m");
}

void    ft_read_test_3()
{
    int         fd;
    char        buf[200];
    size_t      nbytes;
    ssize_t     bytes_read;
    long int    ret1;
    int         err1;

    err1 = -200;
    nbytes = sizeof(buf);
	bzero(buf, 200);
    fd = open("wrongfd.txt", O_RDONLY);
    printf("REAL: reads this from file\n");
    ret1 = read(fd, buf, nbytes);
    printf("string read = %s\n", buf);
    printf("read returns = %ld\n", ret1);
    if (ret1 == -1)
    {
        err1 = errno;
        printf("errno = %d\n", errno);
    }
    close(fd);
    ft_read_test_4(ret1, buf, err1);
}

void    ft_read_test_2(long int ret1, char *string, int err1)
{
    int			fd;
    long int	ret2;
    char		buf[200];
    size_t		nbytes;
    ssize_t		bytes_read;
    int         err2;

    err2 = -200;
    nbytes = sizeof(buf);
	bzero(buf, 200);
    fd = open("fileread.txt", O_RDONLY);
    printf("MINE: reads this from file\n");
    ret2 = ft_read(fd, buf, nbytes);
    printf("string read = %s\n", buf);
    printf("ft_read returns= %ld\n", ret2);
    if (ret1 == -1)
    {
        err2 = errno;
        printf("errno = %d\n", errno);
    }
    close(fd);
    if (ret1 == ret2 && (strcmp(string, buf) == 0) && (err1 == err2))
	    printf("%sOKAY YES :D\n", "\x1B[32m");
	else
        printf("%sNO SORRY :(\n", "\x1B[31m");
	printf("\x1B[0m");
    ft_read_test_3();
}

void    ft_read_test()
{
    int         fd;
    char        buf[200];
    size_t      nbytes;
    ssize_t     bytes_read;
    long int    ret1;
    int         err1;

    err1 = -200;
    nbytes = sizeof(buf);
	bzero(buf, 200);
    fd = open("fileread.txt", O_RDONLY);
    printf("REAL: reads this from file\n");
    ret1 = read(fd, buf, nbytes);
    printf("string read = %s\n", buf);
    printf("read returns = %ld\n", ret1);
    if (ret1 == -1)
    {
        err1 = errno;
        printf("errno = %d\n", errno);
    }
    close(fd);
    ft_read_test_2(ret1, buf, err1);
}

void    ft_write_test()
{
    char         *s1;
    long int     ret1;
    long int     ret2;
	char		buffer1[100];
	char		buffer2[100];

    bzero(buffer1, 100);
    bzero(buffer2, 100);
	s1 = strdup("DOES THIS WORK");
    printf("REAL: for string\n");
    write(0, "'", 1);
    ret1 = write(0, s1, strlen(s1));
    write(0, "'", 1);
    printf("\nwrite = %ld\n", ret1);
    printf("MINE: for string\n'");
    write(0, "'", 1);
    ret2 = ft_write(0, s1, strlen(s1));
    printf("\nft_write = %ld\n", ret2);
    if (ret1 == ret2)
	    printf("%sOKAY YES :D\n", "\x1B[32m");
	else
        printf("%sNO SORRY :(\n", "\x1B[31m");
	printf("\x1B[0m");
    s1 = strdup("");
    printf("REAL: for string\n");
    write(0, "'", 1);
    ret1 = write(0, s1, strlen(s1));
    write(0, "'", 1);
    printf("\nwrite = %ld\n", ret1);
    printf("MINE: for string\n'");
    write(0, "'", 1);
    ret2 = ft_write(0, s1, strlen(s1));
    printf("\nft_write = %ld\n", ret2);
    if (ret1 == ret2)
	    printf("%sOKAY YES :D\n", "\x1B[32m");
	else
        printf("%sNO SORRY :(\n", "\x1B[31m");
	printf("\x1B[0m");
        s1 = strdup("ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ");
    printf("REAL: for string\n");
    write(0, "'", 1);
    ret1 = write(0, s1, strlen(s1));
    write(0, "'", 1);
    printf("\nwrite = %ld\n", ret1);
    printf("MINE: for string\n'");
    write(0, "'", 1);
    ret2 = ft_write(0, s1, strlen(s1));
    printf("\nft_write = %ld\n", ret2);
    if (ret1 == ret2)
	    printf("%sOKAY YES :D\n", "\x1B[32m");
	else
        printf("%sNO SORRY :(\n", "\x1B[31m");
	printf("\x1B[0m");
	int fd = open("write_test.txt", O_WRONLY | O_TRUNC | O_CREAT, 0777);
	write(fd, "Does this work?", 15);
	ft_write(fd, "Does this work?", 15);
	close(fd);
	fd = open("write_test.txt", O_RDONLY);
	read(fd, buffer1, 15);
	printf("%s\n", buffer1);
	read(fd, buffer2, 15);
	printf("%s\n", buffer2);
	close(fd);
    if (strcmp(buffer1, buffer2) == 0)
		printf("%sOKAY YES :D\n", "\x1B[32m");
	else
        printf("%sNO SORRY :(\n", "\x1B[31m");
	printf("\x1B[0m");
	remove("write_test.txt");
}

void    ft_strcpy_test()
{
    char         *s1;
    char         *s2;
    long int     ret1;
    long int     ret2;
    char        *retadr1;
    char        *retadr2;
	char		*temp;

	s1 = strdup("DOES THIS WORK");
	s2 = strdup("ya man");
	temp = strdup("DOES THIS WORK");
	printf("STRCPY TEST 1\n");
    printf("REAL: for string '%s' and string '%s'", s1, s2);
    retadr1 = strcpy(s1, s2);
    printf("\nstrcpy return address = '%s' and checking dst actually changed '%s'\n", retadr1, s1);
	printf("MINE: for string '%s' and string '%s'", temp, s2);
    retadr2 = ft_strcpy(temp, s2);
    printf("\nft_strcpy = '%s' and checking dst actually changed '%s'\n", retadr2, temp);
    if ((strcmp(retadr1, retadr2) == 0) && (strcmp(s1, temp) == 0))
	    printf("%sOKAY YES :D\n", "\x1B[32m");
	else
        printf("%sNO SORRY :(\n", "\x1B[31m");
	printf("\x1B[0m");
	s1 = strdup("have an amazing day!");
	s2 = strdup("");
	temp = strdup("have an amazing day!");
	printf("STRCPY TEST 2\n");
    printf("REAL: for string '%s' and string '%s'", s1, s2);
    retadr1 = strcpy(s1, s2);
    printf("\nstrcpy return address = '%s' and checking dst actually changed '%s'\n", retadr1, s1);
	printf("MINE: for string '%s' and string '%s'", temp, s2);
    retadr2 = ft_strcpy(temp, s2);
    printf("\nft_strcpy = '%s' and checking dst actually changed '%s'\n", retadr2, temp);
    if ((strcmp(retadr1, retadr2) == 0) && (strcmp(s1, temp) == 0))
	    printf("%sOKAY YES :D\n", "\x1B[32m");
	else
        printf("%sNO SORRY :(\n", "\x1B[31m");
	printf("\x1B[0m");
	s1 = strdup("");
	s2 = strdup("wooohoo");
	temp = strdup("");
	printf("STRCPY TEST 3\n");
    printf("REAL: for string '%s' and string '%s'", s1, s2);
    retadr1 = strcpy(s1, s2);
    printf("\nstrcpy return address = '%s' and checking dst actually changed '%s'\n", retadr1, s1);
	printf("MINE: for string '%s' and string '%s'", temp, s2);
    retadr2 = ft_strcpy(temp, s2);
    printf("\nft_strcpy = '%s' and checking dst actually changed '%s'\n", retadr2, temp);
    if ((strcmp(retadr1, retadr2) == 0) && (strcmp(s1, temp) == 0))
	    printf("%sOKAY YES :D\n", "\x1B[32m");
	else
        printf("%sNO SORRY :(\n", "\x1B[31m");
	printf("\x1B[0m");
}

void    ft_strcmp_test()
{
    char         *s1;
    char         *s2;
    long int     ret1;
    long int     ret2;
    char        *retadr1;
    char        *retadr2;
	char		*temp;

    s1 = "";
    s2 = "hello";
    ret1 = strcmp(s1, s2);
    ret2 = ft_strcmp(s1, s2);
    printf("STRCMP TEST 1\n");
    printf("REAL: for string '%s' and string '%s' strcmp = %ld\n", s1, s2, ret1);
    printf("MINE: for string '%s' and string '%s' ft_strcmp = %ld\n", s1, s2, ret2);
    if (ret1 == ret2)
	    printf("%sOKAY YES :D\n", "\x1B[32m");
	else
        printf("%sNO SORRY :(\n", "\x1B[31m");
	printf("\x1B[0m");
    s1 = "helo";
    s2 = "";
    ret1 = strcmp(s1, s2);
    ret2 = ft_strcmp(s1, s2);
    printf("STRCMP TEST 2\n");
    printf("REAL: for string '%s' and string '%s' strcmp = %ld\n", s1, s2, ret1);
    printf("MINE: for string '%s' and string '%s' ft_strcmp = %ld\n", s1, s2, ret2);
    if (ret1 == ret2)
	    printf("%sOKAY YES :D\n", "\x1B[32m");
	else
        printf("%sNO SORRY :(\n", "\x1B[31m");
	printf("\x1B[0m");
    s1 = "a";
    s2 = "A";
    ret1 = strcmp(s1, s2);
    ret2 = ft_strcmp(s1, s2);
    printf("STRCMP TEST 3\n");
    printf("REAL: for string '%s' and string '%s' strcmp = %ld\n", s1, s2, ret1);
    printf("MINE: for string '%s' and string '%s' ft_strcmp = %ld\n", s1, s2, ret2);
    if (ret1 == ret2)
	    printf("%sOKAY YES :D\n", "\x1B[32m");
	else
        printf("%sNO SORRY :(\n", "\x1B[31m");
	printf("\x1B[0m");
}

void    ft_strlen_test()
{
    char         *s1;
    char         *s2;
    long int     ret1;
    long int     ret2;
    
    printf("STRLEN TEST 1\n");
    s1 = "qwertyuiopasdfghjklzxcvbnm";
    ret1 = strlen(s1);
    ret2 = ft_strlen(s1);
    printf("REAL strlen = for string '%s' %ld\n", s1, ret1);
    printf("MINE ft_strlen = for string '%s' %ld\n", s1, ret2);
    if (ret1 == ret2)
	    printf("%sOKAY YES :D\n", "\x1B[32m");
	else
        printf("%sNO SORRY :(\n", "\x1B[31m");
	printf("\x1B[0m");
    printf("STRLEN TEST 2\n");
    s1 = "";
    ret1 = strlen(s1);
    ret2 = ft_strlen(s1);
    printf("REAL strlen = for string '%s' %ld\n", s1, ret1);
    printf("MINE ft_strlen = for string '%s' %ld\n", s1, ret2);
    if (ret1 == ret2)
	    printf("%sOKAY YES :D\n", "\x1B[32m");
	else
        printf("%sNO SORRY :(\n", "\x1B[31m");
	printf("\x1B[0m");
}

int main(int argc, char **argv)
{
    char         *s1;
    char         *s2;
    long int     ret1;
    long int     ret2;
    int         argument;
    char        *retadr1;
    char        *retadr2;
	char		*temp;

    if(argc > 1 && (strcmp(argv[1], "strlen") != 0) && (strcmp(argv[1], "strcmp") != 0) && (strcmp(argv[1], "strcpy") != 0) && (strcmp(argv[1], "write") != 0) && (strcmp(argv[1], "read") != 0) && (strcmp(argv[1], "strdup") != 0))
        printf("%swrong first of arguments\n", "\x1B[31m");
    argument = 1;
    if (argc > 1)
        argument = strcmp(argv[1], "strlen");
    //STRLEN
    if ((argument == 0) && (argc == 3))
    {
        ret1 = strlen(argv[2]);
        ret2 = ft_strlen(argv[2]);
        printf("REAL: for string '%s' strlen = %ld\n", argv[2], ret1);
        printf("MINE: for string '%s' ft_strlen = %ld\n", argv[2], ret2);
        if (ret1 == ret2)
		    printf("%sOKAY YES :D\n", "\x1B[32m");
		else
            printf("%sNO SORRY :(\n", "\x1B[31m");
		printf("\x1B[0m");
   }
    if ((argument == 0) && argc > 3)
        printf("%swrong number of arguments\n", "\x1B[31m");
    if (((argument == 0) && argc == 2) || (argc == 1))
        ft_strlen_test();
    // // //STRCMP
    argument = 1;
    if (argc > 1)
        argument = strcmp(argv[1], "strcmp");
    if ((argument == 0) && (argc == 4))
    {
        ret1 = strcmp(argv[2], argv[3]);
        ret2 = ft_strcmp(argv[2], argv[3]);
        printf("REAL: for string '%s' and string '%s' strcmp = %ld\n", argv[2], argv[3], ret1);
        printf("MINE: for string '%s' and string '%s' ft_strcmp = %ld\n", argv[2], argv[3], ret2);
        if (ret1 == ret2)
		    printf("%sOKAY YES :D\n", "\x1B[32m");
		else
            printf("%sNO SORRY :(\n", "\x1B[31m");
		printf("\x1B[0m");
    }
    if ((argument == 0) && ((argc > 4) || argc == 3))
        printf("%swrong number of arguments for strcmp\n", "\x1B[31m");
    if (((argument == 0) && argc == 2) || (argc == 1))
        ft_strcmp_test();
	//STRCPY
    argument = 1;
    if (argc > 1)
        argument = strcmp(argv[1], "strcpy");
	if ((argument == 0) && ((argc > 4) || argc == 3))
        printf("%swrong number of arguments for strcpy\n", "\x1B[31m");
    if ((argument == 0) && (argc == 4))
    {
		temp = strdup(argv[2]);
        printf("REAL: for string '%s' and string '%s'", argv[2], argv[3]);
        retadr1 = strcpy(argv[2], argv[3]);
        printf("\nstrcpy return address = '%s' and checking dst actually changed '%s'\n", retadr1, argv[2]);
		printf("MINE: for string '%s' and string '%s'", temp, argv[3]);
        retadr2 = ft_strcpy(temp, argv[3]);
        printf("\nft_strcpy return address = '%s' and checking dst actually changed '%s'\n", retadr2, temp);
        if ((strcmp(retadr1, retadr2) == 0) && (strcmp(argv[2], temp) == 0))
		    printf("%sOKAY YES :D\n", "\x1B[32m");
		else
            printf("%sNO SORRY :(\n", "\x1B[31m");
    	printf("\x1B[0m");
	}
	if (((argument == 0) && argc == 2) || (argc == 1))
        ft_strcpy_test();
    argument = 1;
    if (argc > 1)
        argument = strcmp(argv[1], "write");
    if ((argument == 0) && ((argc > 3)))
        printf("%swrong number of arguments for write\n", "\x1B[31m");
    //WRITE
    if ((argument == 0) && (argc == 3))
    {
        printf("REAL: for string\n");
        write(0, "'", 1);
        ret1 = write(0, argv[2], strlen(argv[2]));
        write(0, "'", 1);
        printf("\nwrite = %ld\n", ret1);
        printf("MINE: for string\n'");
        write(0, "'", 1);
        ret2 = ft_write(0, argv[2], strlen(argv[2]));
        // write(0, "'", 1);
        printf("\nft_write = %ld\n", ret2);
        if (ret1 == ret2)
		    printf("%sOKAY YES :D\n", "\x1B[32m");
		else
            printf("%sNO SORRY :(\n", "\x1B[31m");
		printf("\x1B[0m");
   }
   	if (((argument == 0) && argc == 2) || (argc == 1))
        ft_write_test();
    argument = 1;
    if (argc > 1)
        argument = strcmp(argv[1], "read");
    //READ
    if ((argument == 0) && ((argc > 2)))
        printf("%swrong number of arguments for write\n", "\x1B[31m");
    if (((argument == 0) && argc == 2) || (argc == 1))
        ft_read_test();
    argument = 1;
    if (argc > 1)
        argument = strcmp(argv[1], "strdup");
    //Strdup
    if ((argument == 0) && ((argc > 2)))
        printf("%swrong number of arguments for strdup\n", "\x1B[31m");
    if (((argument == 0) && argc == 2) || (argc == 1))
        ft_strdup_test();
    return (0);
}
