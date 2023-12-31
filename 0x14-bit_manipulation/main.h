#ifndef _MAIN_H_
#define _MAIN_H_

#include <stddef.h>

int _putchar(char c);
int clear_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
unsigned int binary_to_uint(const char *b);
int get_endianness(void);
void print_binary(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
void my_binary(unsigned long int n);


#endif /* _MAIN_H_ */
