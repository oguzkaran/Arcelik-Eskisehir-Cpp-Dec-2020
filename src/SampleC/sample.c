#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct tagDEVICE {
	char name[100];
	int id;
	int status;
} DEVICE;


void open_device(DEVICE* p)
{
	p->status = 1;
}

void make_device_name_upper(const DEVICE* p)
{
	//...
}


int insert_device(const DEVICE* p)
{
	//...

	return 1;
}



int main()
{
		

	return 0;
}

