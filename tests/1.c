#include<stdio.h>
#include<unistd.h>
#include<time.h>

int main(void)
{
	time_t now=time(NULL); // time() returns a long integer

	printf("%ld\n", now);

	sleep(2); // pause the program for 2 seconds!!

	time_t after2Secs=time(NULL);
	printf("%ld\n", now);

	double diff=difftime(after2Secs, now);

	printf("\nDifference is %lf\n", diff);
	return 0;
}
