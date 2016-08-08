#include <stdio.h>


int main()
{
 int i = 0;
#pragma omp parallel
{
 printf("i -> %02d ; code inside #pragma omp_parallel\n", i++);
}

 printf("i -> %02d\n", i);
}
