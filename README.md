<<<<<<< HEAD
# printf.
=======
# Printf Project

## Overview

This is the printf project, an implementation of the C standard library's `printf` function. The project is authored by [Yousef Mohsen](https://github.com/YovsefMo) (GitHub: YovsefMo) and [Ahmed Ayman](https://github.com/Ahmed-Mogahed) (GitHub: Ahmed-Mogahed).

## Features

- Supports a variety of format specifiers, including `%s`, `%c`, `%%`, `%d`, `%i`, and `%b`.
- Designed to be user-friendly and easy to integrate into your C projects.
- Highly customizable and extensible.

## Installation

Clone the repository:
   git clone https://github.com/YovsefMo/printf.git

Include the main.h header file in your source code:

#include "main.h"
Compile your code with the main.c and _printf.c files:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o my_program

You can now use the _printf function in your code:

int main(void)
{
    _printf("Hello, %s!\n", "World");
    return (0);
}

## Usage
Use the _printf function in your code, providing a format string and any additional arguments.

Format specifiers start with a % symbol, followed by a character that represents the type of data to be printed.

You can mix format specifiers with regular text within the format string.

#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "World");
    _printf("Character: %c\n", 'A');
    _printf("Integer: %d\n", 42);
    _printf("Binary: %b\n", 98);
    _printf("Unsigned: %u\n", 65535);
    return (0);
}

## Contributing
Contributions are welcome! If you would like to contribute to this project, please follow these guidelines:

Fork the repository.
Create a new branch for your feature or bug fix.
Make your changes and commit them.
Push your changes to your fork.
Submit a pull request to the main repository.
Please ensure that your code follows the project's coding style and passes all tests before submitting a pull request.

## License
This project is licensed under the MIT License - see the LICENSE file for details.

## Authors
Yousef Mohsen (GitHub: YovsefMo)
Ahmed Ayman (GitHub: Ahmed-Mogahed)

This markdown README.md file can be used in your GitHub repository for the printf project.
>>>>>>> 7e0221190cc671179776595e34339666996d5c21
