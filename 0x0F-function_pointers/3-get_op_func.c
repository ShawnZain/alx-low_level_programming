#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform based on the
 * 		operator argument passed
 *
 * @s: the operator argument to pass
 *
 * Return: a pointer to the function corresponding to the operator
 * 	given
 */

int (*get_op_func(char *s))(int, int)
{
	/**
	 * create an array of structures to store all operators and
	 * their corresponding functions
	 */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	/**
	 * iterate through the array of structures looking for the
	 * operator that has been passed to the function
	 */
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	/* return the corresponding function */
	return (ops[i].f);
}
