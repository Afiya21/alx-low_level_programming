#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>


void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);



#endif