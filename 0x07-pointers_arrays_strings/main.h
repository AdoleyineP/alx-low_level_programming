#ifndef MAIN_H
#define MAIN_H

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
void print_chessboard(char (*a)[8]);
int _putchar(char a);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
char *_strstr(char *haystack, char *needle);
#endif
