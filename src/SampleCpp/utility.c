#include <stdlib.h>
#include <time.h>
#include "utility.h"

void randomize()
{
	srand((unsigned int)time(NULL));
}

int get_random_int(int min, int max) //[min, max)
{
	return rand() % (max - min) + min;
}