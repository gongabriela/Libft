**THIS README IS A WORK IN PROGRESS!!**

# Libft: creating your own C library

## Introduction
Libft is a custom implementation of essential C library functions. This project is part of the 42 curriculum and serves as a foundation for future projects, reinforcing fundamental programming skills such as memory management, string manipulation, and linked lists. By re-recreating these functions, we can understand how our code works on a deeper level, allowing us to pinpoint the errors and bugs faster and make better and optimal decisions when it comes to the architecture of our code! 

## Implemented Functions
Libft includes the recreation of several standard functions from `<ctype.h>`, `<string.h>`, `<stdlib.h>`, and `<stdio.h>`, along with additional utility functions. Some of the key implementations include:

- **Memory management:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- **String manipulation:** `ft_strlen`, `ft_strcpy`, `ft_strncpy`, `ft_strdup`, `ft_strchr`, `ft_strrchr`, `ft_strstr`, `ft_strnstr`, `ft_strcmp`, `ft_strncmp`
- **Character checking & conversion:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **Linked lists:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

In order to recreate these functions and complete other mandatory guidelines for this project, I had to learn some new concepts. If you are a 42 student trying to complete this project, I have created a summary of the materials I found online to help me understand these concepts better. I hope this can help you on your own journey of completing the Libft project! 

## Makefile
When we are writing code in C, we are writing it in what we call human-readable source code - a language that we can understand. But, can the computer read and understand the C programming language in order to execute the program that we have created? The answer is no. We need to 'translate' this code to a machine-readable code - binary instructions that the computer can execute. 

You already learned during the piscine how to compile using the ggc -c in the command line. This produces an executable file, that we know by default as the ./a.out in the piscine. So far, our programs have been fairly simple, with one file or two needed to write the program, so it is not that inconvenient to write the whole command on the terminal. But what if we were working on a bigger project, with multiple files and directories? What if we have to perform multiple steps in order to produce our executable? How much time would we lose, if every time we change something in one of the files we have to re-compile everything all over again, manually?

To resolve this problem, Makefiles were created!

A Makefile is here to resolve two main problems that manual compilation has: it automates the compilation and build process of a given project, and it also ensures efficiency by only recompiling files that have changed since the last compilation. This can be done thanks to a build automation tool called **make**.
   
### The structure of a Makefile

A Makefile is composed of rules, targets, variables, dependencies, and commands. All of this is written in Shell (yes, like Shell00 and Shell01 from the piscine. No, you will not get rid of Shell, it will only get worse from here on lol). Let's break down each one of them:

#### **Variables:** 

Working like the variables we use in C, they help avoid repetition and make the Makefile more maintainable. For example, we always have to use the -Wall -Wextra -Werror flags, right? So, instead of having to have all this written down, we can define a variable, and when we need to write all those flags down, we will just need to write the name of the variable. If, for some reason, the flags change, we don't need to correct every line that it is written - just in the variable definition.
To define a variable, it is best practice to do it at the beginning of our file. For this specific example, we would do CFLAGS = -Wall -Wextra -Werror, and when we need to use it we write it as $(CFLAGS).

#### **Rules:**


#### **Targets:**


#### **Dependencies:**


### Tips to create the Makefile for Libft:

Let's review what the subject guidelines are for our Makefile (at least, they are this way in February 2025):

1. If the subject requires it, you must submit a Makefile which will compile your source files to the required output with the flags -Wall -Wextra and -Werror, use cc, and your Makefile must not relink.
2. Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.
3. If your project allows you to use your libft, you must copy its sources and its associated Makefile in a libft folder with its associated Makefile. Your project’s Makefile must compile the library by using its Makefile, then compile the project.
4. You must use the command ar to create your library. Using the libtool command is forbidden.
5. Your libft.a has to be created at the root of your repository.


## .h files

## File descriptors

## Allocating memory (and freeing it)

## Linked lists
