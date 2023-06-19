#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _atoi(char *s);
char *_strcpy(char *dest, char *src);
int _abs(int n);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _isalpha(int c);
unsigned int _strspn(char *s, char *accept);
int _strcmp(char *s1, char *s2);
void _puts(char *str);
int _islower(int c);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
char *_strchr(char *s, char c);
char *_strncat(char *dest, char *src, int n);
char *_memcpy(char *dest, char *src, unsigned int n);
int _isdigit(int c);
char *_strcat(char *dest, char *src);
char *_memset(char *s, char b, unsigned int n);
int _isupper(int c);
int _putchar(char c);

#endif
