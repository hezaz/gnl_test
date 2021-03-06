#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdlib.h>
# include <math.h>
# include <ctype.h>
# include <limits.h>
# include <float.h>
# include <locale.h>
# include <errno.h>
# include <stddef.h>
# include <time.h>
# include <assert.h>

size_t	ft_strlen(const char *s);
char	*gnl_dup(char *s1, size_t n);
char	*gnl_join(char *tmp, char *buf);
char	*find_line(char **tmp, char **buf);
char	*get_next_line(int fd);

#endif