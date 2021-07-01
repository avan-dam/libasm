# libasm
The aim of this project is to get familiar with assembly language.

**Subject: **
The library must be called libasm.a.
• You must submit a main that will test your functions and that will compile with
your library to show that it’s functional.
• You must rewrite the following functions in asm:
◦ ft_strlen (man 3 strlen)
◦ ft_strcpy (man 3 strcpy)
◦ ft_strcmp (man 3 strcmp)
◦ ft_write (man 2 write)
◦ ft_read (man 2 read)
◦ ft_strdup (man 3 strdup, you can call to malloc)
• You must check for errors during syscalls and properly set them when needed
• Your code must set the variable errno properly.
• For that, you are allowed to call the extern ___error or errno_location.

**Prerequisites**
Please make sure you have nasm installed 
You can do this using brew with the command
brew install nasm

**Usage and Testing**
Running make will make the library libasm.a
I have also provided a main.c for testing.
To use run the following steps in terminal

![Screenshot 2021-07-01 at 09 59 05](https://user-images.githubusercontent.com/61982496/124088786-93b22b00-da53-11eb-83e0-f034aa1d7e78.png)
