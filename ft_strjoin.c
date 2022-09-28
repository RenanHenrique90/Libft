#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *new_str;
    size_t  len_s1;

    len_s1 = ft_strlen(s1);
    new_str = malloc((len_s1 + ft_strlen(s2) + 1) * sizeof(char));
    if(!new_str)
        return (NULL);
    while(*s1)
        *new_str++ = *s1++;
    while(*s2)
        *new_str++ = *s2++;
    *new_str = 0;
    return (new_str);
}
