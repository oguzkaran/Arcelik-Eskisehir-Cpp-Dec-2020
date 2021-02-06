#include <stdlib.h>
#include <time.h>
#include "utility.h"

void randomize()
{
	srand((unsigned int)time(NULL));
}

int generateRandomInt(int min, int max) //[min, max)
{
	return rand() % (max - min) + min;
}