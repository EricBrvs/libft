    #include <stddef.h>

    void *ft_memcpy(void *dst, const void *src, size_t n)
    {
        if(dst == NULL || src == NULL)
            return NULL;

        unsigned char *d;
        unsigned char *s;
        size_t i;

        i = 0;
        d = (unsigned char *)dst;
        s = (unsigned char *)src;

        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
        return (dst);
    }