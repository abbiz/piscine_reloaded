#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# include <fcntl.h>
# include <unistd.h>

# define BUF_SIZE 4096

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_display_file(char *file_name);

#endif
