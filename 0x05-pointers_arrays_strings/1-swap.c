#include "main.h"
/**
* swap_int - does some swapping
* @a: first int
* @b: second int
* Returns void nothing nada
*/
void swap_int(int *a, int *b)
{
		int s;

		s = *a;
		*a = *b;
		*b = s;
}
