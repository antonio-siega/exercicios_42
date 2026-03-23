#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t  len;
    char    *temp;
    
    len = 0;
    temp = (char*) s;
    while (*temp != '\0')
    {
        len++;
        temp++;
    }
    return len;
}