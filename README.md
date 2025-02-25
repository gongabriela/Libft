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

## Header files (.h)

So far, we have learned how to compile all the .c files of our library into `.a` static library file. So, when we are working on another project, we can use the functions that we have implemented in our libft. To use the Libft in another project, we have to perform two tasks. One is linking the .a file with the files of our project when producing the executable, like this:

```make
gcc project.c mylib.a -o project_exec
```

The other step is creating a Header file. 

In C, header files (.h files) are used to declare functions, macros, global variables, and, in C++, classes. They allow multiple source files (.c files) to share common declarations, making code more organized, reusable, and less redundant.

For example, when working on a project that uses the libft functions, instead of manually adding all function declarations to every file where they are needed, we can create a header file that contains these declarations. By including this header file in our source files using the preprocessor directive (#include "yourheadername.h"), the compiler can recognize the function prototypes without requiring them to be rewritten in every file. This simplifies project management and ensures consistency across the codebase.

### **About preprocessors**

A preprocessor directive is a command that starts with # and is processed before compilation by the C preprocessor (CPP). These directives do not produce machine code but instead modify the source code before it is compiled.

There are different types of preprocessor directives, but the ones we will focus on here are:

#### **File Includes**
- Includes header files in your program. You have already done this often when putting the `#include <unistd.h>` at the top of your files to use the write() function, for example. To use your custom library, it's the same, except the syntax will be with "" and not <>: `#include "libft.h"`. The angle brackets (<>) tell the compiler to search for the header file in system directories. The quotes ("") tell the compiler to look in the current project directory first, which is where the folder of Libft will be!

### **Macro definition**
- The `#define` directive creates constants or macros to replace text in the source code.
- Example: if I am doing a mathematical calculation and I am constantly using the value of PI, I can create a macro definition on my header file: `#define PI 3.14159`.
- We can even create functions like `#define SQUARE(x) ((x) * (x))` as macros!
- It is a very useful tool to make our code more organized and less cluttered.

### **Conditional compilation**
- We will focus on #ifndef and #endif, as these are crucial for Libft. However, there are other directives you can explore!
- The `#ifndef, #endif` are called include guards, and they prevent multiple inclusions of the same header file. If you accidentally include libft.h twice in a file, the compiler would normally process it twice, causing errors. Include guards prevent this by ensuring the file is included only once. Here is how to use them:

   ```make
   #ifndef MYLIB_H
   #define MYLIB_H

  void myFunction();

  #endif
  ```

Now, I am going to focus in topics that I had to learn in more depth to create some of the functions of libft. I hope that this is being helpful to you so far!

## File descriptors

For the functions that end with "fd", you will have to learn to use file descriptors. This knowledge will also be very useful for one of the next projects, 'get_next_line'!

This topic can become very complex if we keep going deeper and deeper, so what I am going to do here is to try to explain it as simply as possible for you to be able to use them to complete this project. After that, it is up to you if you want to research this topic further (which I recommend)!

### `**A simple explanation of file descriptors**`

Imagine you walk into a big library and want to read a book. Instead of taking the book home, the librarian gives you a special ticket number that represents your book. Every time you want to read it, you just show the librarian the ticket, and they bring you the book. When you’re done, you return the book, and the librarian takes back the ticket.

Now, think of a computer as a giant library, where files, programs, and other resources are like books. The file descriptor is the "ticket number" that the computer gives you when you open a file.

When a program wants to read or write a file, it asks the operating system (like the librarian) to open it. The operating system then:

1. Finds the file you want.
2. Assigns a number (the file descriptor) to track it.
3. Gives that number to your program so it can use the file.
4. For example, let’s say you open a file called "notes.txt". The computer might say:

"Here is file descriptor 3—use this number to read or write your file."

Now, your program doesn’t need to worry about where the file is stored. It just tells the computer, "Hey, read from file descriptor 3!"

#### `**Special File Descriptors Already in Every Program**`

Even if you don’t open any files, every running program already has three file descriptors assigned by default:

0		- Standard Input (stdin) – This is where the program gets input (like from your keyboard).

1		- Standard Output (stdout) – This is where the program prints messages (like your screen).

2		- Standard Error (stderr) – This is where error messages are shown.

Think of a movie theater:

- The screen is like stdout (1)—it shows you the movie.

- The microphone for questions is like stdin (0)—you can talk into it.

- The emergency speaker is like stderr (2)—it’s only used when something goes wrong.

Once you’re done using a file, you must close it—just like returning a book to the library. Otherwise, the system might run out of "tickets" (file descriptors) and stop working properly.

So, a program usually follows these steps:

1. Open a file (get a file descriptor). (check out the function open());

2. Read or write using that file descriptor. (check out the functions read() and write());

3. Close the file (return the file descriptor to the system). (gess what?? yes, function close());

So, long story short, File descriptors are just numbers that the computer uses to track open files. They help programs communicate with files, keyboards, screens, and even networks. Even though you don’t see them directly, file descriptors are working behind the scenes every time you open a file, run a program, or browse the internet!

## Allocating memory (and freeing it)

In most programming languages, memory management is handled automatically through garbage collection (e.g., Python, Java). However, in C, memory management is manual — programmers must explicitly allocate and deallocate memory, and this is where malloc() and free() come into play.

Memory is not an infinite resource. Poor memory management can lead to excessive memory usage, slow performance, or even crashes. Understanding how to allocate and free memory properly is an essential skill for C programmers.

### **Memory layout in a running program**

To understand `malloc()` and `free()`, we first need to look at how memory is organized when a program runs. It is typically structured like this:

```pgsql

+------------------------+ High Memory Addresses
|        Stack          |  (Grows downward)
|------------------------|
|       Heap           |  (Grows upward)
|------------------------|
|  Uninitialized Data  |  (.bss segment)
|------------------------|
|  Initialized Data    |  (.data segment)
|------------------------|
|       Code          |  (.text segment, Executable Instructions)
+------------------------+ Low Memory Addresses

```

- Code segment: this is where it is stored the executable code (the machine instructions);

-  Initialized data segment: this is where all our global and static variables are initialized at compile time.

-  Uninitialized data segment: stores global and static variables that are not initialized.

-  Heap: this section is used for **dynamic memory allocation** for functions like `malloc()`, `realloc()` and `free()`.

-  Stack: stores function call frames. Memory is automatically allocated when a function is called and freed when it returns. Excessive function calls without returning can cause stack overflow, crashing the program.

### **how `malloc()` and `free()` work**

Let's take this piece of code for an example:

```c
int *ptr = (int *)malloc(4 * sizeof(int));
```

What does malloc() do here?

1. It asks the heap allocator for a block of memory large enough to hold 4 integers.
2. It marks this memory as in use and returns a pointer to the allocated block.
3. The memory is not initialized—it contains garbage values until assigned.

To free this memory, we call:

```c
int *ptr = (int *)malloc(4 * sizeof(int));
free(ptr);
```

Now, if we free the pointer, the heap allocator marks the memory block as "free", allowing it to be reused later. free() does not shrink the heap, it only marks memory as reusable.If you forget to call free(), the allocated memory remains reserved, leading to memory leaks. Over time, this can cause your program to use excessive memory. To check leaks, you can use the tool `Valgrind`.

```sh
valgrind ./your_program
```

## Linked lists
