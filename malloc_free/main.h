#ifndef MAIN_H
#define MAIN_H

void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
int _putchar(char c);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *strn);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);

void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);

int **alloc_grid(int width, int height);




#endif /* MAIN_H */

