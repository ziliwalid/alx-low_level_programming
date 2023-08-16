#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - add op
  * @a: param 1
  * @b: pram 2
  * Return: int
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - sub op
  * @a: pram 1
  * @b: pram 2
  * Return: int
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - mul op
  * @a: pram 1
  * @b: pram 2
  * Return: int
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - div op
  * @a: pram 1
  * @b: pram 2
  * Return: int
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - mod op
  * @a: pram 1
  * @b: pram 2
  * Return: int
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
