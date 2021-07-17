# FT_PRINTF
![](https://img.shields.io/badge/Language-C-blue)
![](https://img.shields.io/badge/School-42-black)

> This is a reimplementation of the function printf included in libc. 
> This implementation cover the following set of flags and conversions, 
> besides the availability of the width and precision modifiers.

### Flags

| Flag  | Description                                                                   |
|-------|-------------------------------------------------------------------------------|
| **-** | Left-justify within the given field width; Right justification is the default.|
| **0** | Left-pads the number with zeroes(0) instead of space.                         |
| **+** | Add a plus sign '+' int the front of positive numeric conversions             |
|  ` `  | If no sign is going to be written, a blank space is inserted before the value.|
| **#** | Used with x or X specifiers. Add (0x) in front of values different than zero. |

### Conversions

| Specifiers | Description                                            |
|------------|--------------------------------------------------------|
| **c**      | Print a single character.                              |
| **s**      | Print a string of characters                           |
| **p**      | The void * pointer argument is printed in hexadecimal. |
| **d**      | Print a decimal (base 10) number.                      |
| **i**      | Print an integer in base 10.                           |
| **u**      | Print an unsigned decimal (base 10) number.            |
| **x**      | Print a number in hexadecimal (base 16)                |
| **%**      | Print a percent sign '%'                               |