#include "main.h"
/**

 * handle_write_char - Prints a string

 * @c: char types.

 * @buffer: Buffer array to handle print

 * @flags:  Calculates active flags.

 * @width: get width.

 * @precision: precision specifier

 * @size: Size specifier

 *

 * Return: Number of chars printed.

 */

int handle_write_char(char c, char buffer[],

        int flags, int width, int precision, int size)

{ /* char is stored at left and paddind at buffer's right */

        int i = 0;

        char padd = ' ';


        UNUSED(precision);

        UNUSED(size);


        if (flags & F_ZERO)

                padd = '0';


        buffer[i++] = c;

        buffer[i] = '\0';


        if (width > 1)

        {

                buffer[BUFF_SIZE - 1] = '\0';

                for (i = 0; i < width - 1; i++)

                        buffer[BUFF_SIZE - i - 2] = padd;


                if (flags & F_MINUS)

                        return (write(1, &buffer[0], 1) +

                                        write(1, &buffer[BUFF_SIZE - i - 1], width - 1));

                else

                        return (write(1, &buffer[BUFF_SIZE - i - 1], width - 1) +

                                        write(1, &buffer[0], 1));

        }


        return (write(1, &buffer[0], 1));

}
'0';

                        if (extra_c)

                                buffer[--ind] = extra_c;

                        return (write(1, &buffer[3], i - 3) + write(1, &buffer[ind], length));

                }

                else if (!(flags & F_MINUS) && padd == '0')/* extra char to left of padd */

                {

                        if (extra_c)

                                buffer[--padd_start] = extra_c;

                        buffer[1] = '0';

                        buffer[2] = 'x';

                        return (write(1, &buffer[padd_start], i - padd_start) +

                                write(1, &buffer[ind], length - (1 - padd_start) - 2));

                }

        }

        buffer[--ind] = 'x';

        buffer[--ind] = '0';

        if (extra_c)

                buffer[--ind] = extra_c;

        return (write(1, &buffer[ind], BUFF_SIZE - ind - 1));

}
