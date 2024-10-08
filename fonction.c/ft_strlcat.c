#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len;
    size_t src_len;
    size_t space_left;
    size_t i;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    i = 0;

      if (size == 0)
        return (src_len);

    if(size <= dst_len)
        return (size + src_len);

    space_left = size - dst_len - 1;
    while (src[i] && i < space_left)
    {
        dst[dst_len+ i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + src_len);
}
