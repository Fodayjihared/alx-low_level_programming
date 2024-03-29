#ifndef MAIN_HEADER_
#define MAIN_HEADER_

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _putchar(char c);
unsigned long int _pow(unsigned int base, unsigned int power);
int get_endianness(void);

#endif
