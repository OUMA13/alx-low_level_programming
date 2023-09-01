#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int c);
int _putchar(char c);
int git_bit(unsigned long int c, unsigned int index);
int set_bit(unsigned long int *c, unsigned int index);
int clear_bit(unsigned long int *c, unsigned int index);
unsigned int flip_bits(unsigned long int c, unsigned long int m);
int get_endianness(void);

#endif
