/**
 * swap_int- swaps the value of two integers
 * @a: first argument
 * @b: second argument
 */

void swap_int(int *a, int *b)
{
	int r;
	r = *b;
	*b = *a;
	*a = r;
}
