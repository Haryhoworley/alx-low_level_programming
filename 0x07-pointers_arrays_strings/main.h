#include <stdio.h>
#ifndef HEADER_FILE
#define HEADER_FILE

int _putchar(char c);
char *_memeset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *strstr(char *haystick, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char ***s, char *to);

#endif
