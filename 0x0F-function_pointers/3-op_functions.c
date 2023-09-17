#include "3-calc.h"
#include "function_pointers.h"

/**
 * op_add - Sum numbers
 * @a: First number.
 * @b: Second number.
 *
 * Return: The sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtract numbers
 * @a: First number.
 * @b: Second number.
 *
 * Return: Difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiply numbers
 * @a: First number.
 * @b: Second number.
 *
 * Return: Product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divide numbers
 * @a: First number.
 * @b: Second number.
 *
 * Return: Quotient.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Modulus og number
 * @a: First number.
 * @b: Second number.
 *
 * Return: Modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
