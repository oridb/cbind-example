#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/* 
 * We're putting this code into namespace 'c'.
 *
 * Myrddin's namespacing uses a '$' to separate
 * the package from the function name, so we
 * name the functions we're binding
 *
 *      pkg$funcname
 *
 * The package and function name don't have to
 * match up with C code.
 */
ssize_t c$write(int fd, char *data, size_t len)
{
    return write(fd, data, len);
}

ssize_t c$puts(char *s)
{
    return puts(s);
}
