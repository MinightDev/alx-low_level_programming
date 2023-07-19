#ifndef CALC_H
#define CALC_H

int (*get_op_func(char *s))(int, int);

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct op - Struct op
 *
 * @op: operator
 * @f: The function
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* Function prototypes */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
