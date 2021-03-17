#include <stdlib.h>
#include <time.h>
#include "utility.h"


int generateRandomInt(int min, int max) //[min, max)
{
	return rand() % (max - min) + min;
}