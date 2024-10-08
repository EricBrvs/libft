#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    if (dest == NULL && src == NULL)
        return (NULL);

    unsigned char *d;
    const unsigned char *s;
    size_t i;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    i = 0;

    if(d < s || d >= (s + n))
    {
        while(i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        i = n;
        while(i > 0)
        {
            d[i-1] = s[i-1];
            i--;
        }
    }
    return (dest);
}
