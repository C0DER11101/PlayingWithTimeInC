#include<stdio.h>
#include<unistd.h>
#include<time.h>

int main(void)
{
	clock_t start, end;

	start=clock();
	for(int i=0; i<1000; i++);
	end=clock();

	double total=(double)(end-start)/CLOCKS_PER_SEC;
	printf("Number of clocks: %fs\n", total);
	return 0;
}
