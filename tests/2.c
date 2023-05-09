#include<stdio.h>
#include<unistd.h>
#include<time.h>

int main(void)
{
	time_t now=time(NULL);
	printf("\nTime(not pretty): %ld\n", now);

	char*str=ctime(&now); // get a nice and pretty string of the current time.

	printf("\nTime(pretty): %s\n", str);
	return 0;
}
