#ifndef SCHOOL
#define SCHOOL

#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
void print_array(int *array, size_t l, size_t h);
int binary_helper(int *array, int value, size_t lo, size_t hi);
int advanced_binary(int *array, size_t size, int value);


#endif
