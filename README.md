# ft_printf

The goal of the project is to recreate  recreate the printf function. This project teaches us about variadic arguments.

- Supported conversions: %, c, s, p, i, d, u, x, X
- Supported flags: # + (space)
- Supported options: - 0 . * width

## Usage

Run ``make`` to compile.

```c
// Include the header
#include "ft_printf.h"

int main(void)
{
      // Call the function
      ft_printf("Hello ft_printf!");
      return (0);
}
