
#ifndef MY_H_
#define MY_H_


void my_putchar(char c);
int my_getnbr(char *str);
void my_putstr(char const *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);
int  findsize(char *argv);
void is_valid(char *buffer);
//int count_line(FILE *fp);
char ** map_to_tab(char *buffer);
void init_window(char **map);
int get_line_number(char *str);
int get_max_col(char *str);
char * get_next_line(int fd);
#endif /* !MY_H_ */
