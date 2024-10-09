include <stdio.h>
 ✖int     main()
  {
 ✖        char    data[] = "je suis entrain de faire un test";
          char    letter;
          char    *result;
  
          letter = 'a';
          result = memchr(data, letter, sizeof(data));
          if (!result)
                  printf("le charactere %c ne fait pas parti du string %s\n", letter,                   
                          data);
          else
                  printf("le charactere %c est a l'index %s\n", letter, result);
          return (0);
  }

