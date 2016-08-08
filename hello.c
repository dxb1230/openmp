#include <stdio.h>

int main()
{

 puts("the following block included inside #pragma omp parallel \n");
 puts("So it will be executed as many times as the number of cores on this system!\n");
#pragma omp parallel
{
	printf ( "Hello  Parallel Multicore World!, I'm openMP!\n" );
}
	return 0;
}
