#include "main.h"
/**
 * swap_int -  function that will swap numbers
 * @a: integer a
 * @b: integer b
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
