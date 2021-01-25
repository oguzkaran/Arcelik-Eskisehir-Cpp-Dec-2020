#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct tagSAMPLE {
	int x;
	double y;
} SAMPLE;

int main()
{	
	printf("sizeof(SAMPLE) = %u\n", (unsigned int)sizeof(SAMPLE));

	SAMPLE s = {10, 3.4};

	void* vs = &s;
	char* cs = (char*)vs;

	printf("%d\n", *(int *)cs);
	printf("%lf\n", *(double*)(cs + 4));

	return 0;
}

