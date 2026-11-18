*This project has been created as part of the 42 curriculum by ana-cmar.*

<div align="center">
<p align="center">
  <img src="https://i.imgur.com/f5ADmLT.png" width="700" alt="Libft">
</p>
</div>
<br> <br>
<picture>
  <img src="https://i.imgur.com/IfDbu99.png" alt="Description" width="250">
</picture>
<br> <br>

**Libft** is more than just a collection of functions. It is a library built from the ground up, one function at a time.

Think of it as a library of my own, where every function is like a book: carefully written, understood and built through hours of coding, problem-solving and logical thinking.

Each "book" has its own purpose. Some deal with strings and character manipulation, others with memory management, data allocation, conversions and linked lists. Individually, they solve specific problems; together, they form a collection of reusable tools that can be carried into future C projects.

The goal of Libft is not simply to recreate existing functions, but to understand what happens behind them: how data is handled, how memory works, how pointers interact and how different pieces of logic come together.

**Every function is a small piece of knowledge. Every piece adds to the library.**

<div align="center">
	<picture>
	<img src="https://i.imgur.com/1ARjY6t.png"
		alt="Library Overview"
		width="200"
		align="left">
	</picture>
</div>
<br> <br> <br> <br> <br> <br>
The library is organized into three sections, each bringing together functions with a specific purpose.
<br>
<br>

<table>
  <tr>
    <td align="center" valign="middle">
      <picture>
        <img src="https://i.imgur.com/t7obhIU.png" alt="01" width="100">
      </picture>
    </td>
    <td valign="middle">
      <strong>Libc Reimplementations</strong>
      <br>
      Recreations of existing functions from the standard C library, focusing on understanding their internal logic and behaviour.
    </td>
  </tr>
</table>

| Function | Description |
|----------|-------------|
| `ft_strlen` | Returns the length of a string |
| `ft_strdup` | Duplicates a string using malloc |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_strchr` / `ft_strrchr` | Finds the first/last occurrence of a character |
| `ft_strlcpy` | Copies a string with size limitation |
| `ft_strlcat` | Concatenates strings with size limitation |
| `ft_memset` | Fills a memory area with a specified byte |
| `ft_bzero` | Fills a memory area with zeroes |
| `ft_memcpy` | Copies a memory area |
| `ft_memmove` | Copies memory safely, including overlapping areas |
| `ft_memcmp` | Compares two memory areas |
| `ft_memchr` | Searches for a byte in a memory area |
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character belongs to the ASCII set |
| `ft_isprint` | Checks if a character is printable |
| `ft_toupper` / `ft_tolower` | Converts a character to uppercase/lowercase |
| `ft_atoi` | Converts a string to an integer |

<br>
<table>
  <tr>
    <td align="center" valign="middle">
      <picture>
        <img src="https://i.imgur.com/i1xUHWl.png" alt="02" width="100">
      </picture>
    </td>
    <td valign="middle">
      <strong>Additional Library Functions</strong>
      <br>
      New functions developed to expand the library, covering string manipulation, conversions, memory allocation and file descriptor operations.
    </td>
  </tr>
</table>

| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Joins two strings into one |
| `ft_split` | Splits a string into an array using a delimiter |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string |
| `ft_strmapi` | Applies a function to each character, returning a new string |
| `ft_striteri` | Applies a function to each character, modifying the string in place |
| `ft_itoa` | Converts an integer into a string |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

<br>
<table>
  <tr>
    <td align="center" valign="middle">
      <picture>
        <img src="https://i.imgur.com/3NAGkG1.png" alt="03" width="100">
      </picture>
    </td>
    <td valign="middle">
      <strong>Linked List Functions</strong>
      <br>
      A collection of functions dedicated to creating, managing and manipulating singly linked lists.
    </td>
  </tr>
</table>

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new linked list node |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstsize` | Returns the number of nodes |
| `ft_lstlast` | Returns the last node |
| `ft_lstdelone` | Deletes a single node |
| `ft_lstclear` | Deletes all nodes in the list |
| `ft_lstiter` | Applies a function to each node |
| `ft_lstmap` | Creates a new list by applying a function to each node |

<br>
<picture>
  <img src="https://imgur.com/Fu6odvY.png" alt="Instruction" width="240">
</picture>
<br> <br>
To get started with the library, follow these simple steps.

<br>

**- Clone the repository and navigate to its directory:**

```bash
git clone git@vogsphere.42porto.com:vogsphere/intra-uuid-0300990d-cd25-4dea-91b3-e739cea02da9-7785368-ana-cmar Libft
cd libft
```

**- Compile the library:**

```bash
make
```

This generates the static library `libft.a`.

**- Compile it with the library:**

```bash
cc -Wall -Wextra -Werror main.c libft.a
./a.out
```
<br><br>
<picture>
  <img src="https://imgur.com/lu5ZkQc.png" alt="Makefile" width="220">
</picture>

| Command | Description |
|---------|-------------|
| `make` / `make all` | Compiles the library |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and the library |
| `make re` | Recompiles the library from scratch |

<br>
<picture>
  <img src="https://imgur.com/NydW4mR.png" alt="Resources" width="220">
</picture>

Throughout this project, several resources were used to understand C programming concepts and guide the implementation of the library.

- **Manual Pages (`man`):** Used through the terminal to understand the behaviour, parameters and return values of the standard functions being reimplemented.
- **42 Subject:** Used as the main guide for project requirements, specifications and implementation rules.
- **Peers:** Discussions and knowledge sharing with fellow students helped clarify concepts and explore different approaches to problems.

<br>

AI tools were occasionally used as a visual learning aid. I find it easier to understand and retain concepts when I can see how they work, so I used AI to create visual explanations and examples of concepts that were initially difficult to grasp.

This was particularly helpful when learning about:

- **Pointers:** Visualizing memory addresses, references and how pointers interact with variables.
- **Memory management:** Understanding dynamic allocation, deallocation (`malloc` and `free`) and how memory is organized.
- **Type conversions:** Clarifying casts and how data types interact.
- **Linked Lists:** Visualizing nodes, pointers, connections between elements and how list operations affect the structure.

These visual explanations helped me build a clearer mental model of how things work internally, making it easier to understand, implement and debug the functions independently.

<br><br>
<div align="center">
<picture>
  <img src="https://imgur.com/xlcFSmY.png" alt="ALways" width="400">
</picture>
</div>
