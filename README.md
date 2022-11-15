# 📓42 Cursus' Printf

##### ***Because ft_putnbr() and ft_putstr() aren’t enough\***



## Status

**Finished**

Grade: **105/100** ✅

📋 NOTE: During the evaluation I had a compilation error. I fixed it and now it works perfectly

## 💡 About the project

> *This project is pretty straight forward. You will recode printf. Hopefully you will be able to reuse it in future project without the fear of being flagged as a cheater. You will mainly learn how to use variadic arguments.*

```
The printf function is one of the most versatile and well-known functions in the C language. From a testing aid to tabulation method, printf is a very powerful and important tool in every dev's kit. This project aims to recreate the behaviour of the original MacOS's printf, including its basic error management, some of its flags, minimum field width stipulation and most of its basic conversions.
```

<h3 align=center>
Mandatory
</h3>

A small description of the required conversion:

- `%c` print a single character.
- `%s` print a string of characters.
- `%p` The void * pointer argument is printed in hexadecimal.
- `%d` print a decimal (base 10) number.
- `%i` print an integer in base 10.
- `%u` print an unsigned decimal (base 10) number.
- `%x` print a number in hexadecimal (base 16).
- `%%` print a percent sign.

<h3 align=center>
Bonus
</h3>

- Manage all the following flags: `# +`(yes, one of them is a space)

## 🛠️ Usage

### Requirements

The library is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, run:

```makefile
$ cd path/to/ft_printf && make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```c
#include "ft_printf.h"
```

```makefile
$ make
```

For bonus functions:

```makefile
$ make bonus
```

**2. Cleaning all binary (.o) and executable files (.a)**

To clean all files generated while doing a make, go to the path and run:

```makefile
$ make fclean
```

**3. Using it in your code**

To use the library functions in your code, simply include its header:

```c
#include "libft.h"
```

## 📋 Testing

You can use any of this third party testers to test the project

- [Tripouille/printffTester](https://github.com/Tripouille/printfTester)
- [paulo-santana/ft_printf_tester](https://github.com/paulo-santana/ft_printf_tester)
