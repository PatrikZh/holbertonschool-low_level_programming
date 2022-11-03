#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 */

int main(__attribute__((unused))int argc, char **argv)
{
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]),atoi(argv[3])));
	return (0);
}
