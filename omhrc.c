#include <stdio.h>

int main()
{

	int i=1;

	printf("race condition example\n");
	printf("Same computation, result  vary each time\n");
	
	#pragma omp parallel
	{
		i*=2;
	}

	printf( "Result : %03d\n", i);
	return 0;
}
