**THIS README IS A WORK IN PROGRESS!!**

# Libft: creating your own C library

## Introduction
Libft is a custom implementation of essential C library functions. This project is part of the 42 curriculum and serves as a foundation for future projects, reinforcing fundamental programming skills such as memory management, string manipulation, and linked lists. By recreating these functions, we gain a deeper understanding of how our code works, allowing us to pinpoint errors and bugs faster and make better, more optimal decisions regarding code architecture.

## Implemented Functions
Libft includes the recreation of several standard functions from `<ctype.h>`, `<string.h>`, `<stdlib.h>`, and `<stdio.h>`, along with additional utility functions. Some of the key implementations include:

- **Memory management:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- **String manipulation:** `ft_strlen`, `ft_strcpy`, `ft_strncpy`, `ft_strdup`, `ft_strchr`, `ft_strrchr`, `ft_strstr`, `ft_strnstr`, `ft_strcmp`, `ft_strncmp`
- **Character checking & conversion:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **Linked lists:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

To recreate these functions and meet the mandatory guidelines for this project, I had to learn several new concepts. If you're a 42 student working on this project, I’ve compiled a summary of the materials I found online that helped me understand these concepts better. I hope this can assist you on your journey to completing the Libft project! 

## Makefile
When writing code in C, we create human-readable source code—a language we can understand. However, computers cannot directly read and execute C code. We must first compile it into machine-readable code—binary instructions that the computer can process.

During the piscine, you learned how to compile C programs using `gcc -c` in the command line, producing an executable file (by default, `./a.out`). So far, our programs have been fairly simple, usually consisting of only one or two files, making it manageable to write the entire compilation command manually. But what if we were working on a larger project with multiple files and directories? What if our build process involved multiple steps? How much time would we waste if we had to manually recompile everything every time we modified a single file?

To solve this problem, Makefiles were created!

A Makefile addresses two major issues with manual compilation:

1. It automates the compilation and build process.
2. It ensures efficiency by recompiling only the files that have changed since the last compilation.

This is made possible by a build automation tool called `make`.

#### **Variables:** 

Similar to variables in C, variables in a Makefile help avoid repetition and make the file more maintainable. For example, we frequently use the `-Wall -Wextra -Werror` flags. Instead of writing them out every time, we can define a variable:

```make
CFLAGS = -Wall -Wextra -Werror
```
Whenever we need to use these flags, we simply reference the variable:

```make
$(CFLAGS)
```

If we ever need to modify the flags, we only have to change them in one place, rather than updating multiple lines in the Makefile.

#### **Rules:**

Rules define how the project should be built. Each rule consists of three parts:

```make
target: dependencies
   commands
```

#### **Targets**

A target is usually the name of a file to be generated (such as an executable or an object file). However, it can also be a phony target—a rule that doesn’t produce an actual file, like `clean` or `all`.

#### **Dependencies**

Dependencies (or prerequisites) are files or targets that must be created or updated before the current target can be built. If any dependency is newer than the target, the associated commands are executed.

#### **Commands**

Commands are the shell instructions that tell `make` how to build the target from its dependencies. Each command must start with a tab character—not spaces.

### **Example:**

```make
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = main.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
```

Let’s break this down:

#### **Variables:**

- `NAME`: Defines the name of the compiled library (libft.a).

- `CC`: Specifies the compiler (cc).

- `CFLAGS`: Stores the compilation flags for warnings (-Wall -Wextra -Werror).

- `SRC`: Holds the names of all .c source files.

- `OBJ`: Converts SRC filenames into their corresponding .o object files.

Using variables helps keep the Makefile organized. If we add a new source file, we only need to update SRC, making maintenance easier.

#### **Rules:**

- `all`: The default rule. If no specific rule is specified, make runs the first rule in the file—typically all. This rule depends on $(NAME), so `make` moves on to that target.

- `$(NAME)`: Builds the library by archiving the object files (`$(OBJ)`) into `libft.a`.

- `clean`: Removes object files (`rm -rf $(OBJ)`).

- `fclean`: Calls `clean`, then removes `libft.a`.

- `re`: Calls `fclean` and then rebuilds everything from scratch (`all`).

#### **Understanding Makefile Execution**

If you simply run `make`, it executes the first rule (`all`).

`all` depends on `$(NAME)`, so make moves to `$(NAME)`.

`$(NAME)` depends on `$(OBJ)`, so make ensures that all .o files are up-to-date.

Once `$(OBJ)` is built, the archiving command (`ar rcs $(NAME) $(OBJ)`) is executed.

Finally, `make` returns to `all`, completing the build process.

### Tips to create the Makefile for Libft:

Let's review what the subject guidelines are for our Makefile (at least, they are this way in February 2025):

`If the subject requires it, you must submit a Makefile which will compile your source files to the required output with the flags -Wall -Wextra and -Werror, use cc, and your Makefile must not relink.`

- "must not relink" means that your Makefile should avoid unnecessary recompilation of the executable if no source files have changed. This ensures efficient compilation by not rebuilding the entire project unless needed. If you are building the rules correctly. it won't relink!

`Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.`

- Those are the same rules that I used in my example...

`You must use the command ar to create your library. Using the libtool command is forbidden.`

- The final goal of this project is to create a static library. If we were allowed to use `libtool`, the process of creating one would be fairly easy. They want us to do as many things manually as possible. So, the alternative to libtool is the `ar` command, as I showed in the example. 


`Your libft.a has to be created at the root of your repository.`

- this one is fairly self-explanatory!

I hope that this Makefile file was useful for you to understand how to create a Makefile, which is an important step if you want to create your own static library. Now, another crucial file is the .h file, which I will explain further below!

## .h files

## File descriptors

## Allocating memory (and freeing it)

## Linked lists
