#include<stdio.h>
#include<unistd.h>
#include<time.h>

int main(void)
{
	time_t now=time(NULL);
	printf("\ncurrent time: %ld\n", now);

	struct tm*curtime=localtime(&now);

	printf("tm_sec: %d\n", (*curtime).tm_sec);
	printf("tm_min: %d\n", curtime->tm_min);
	printf("tm_hour: %d\n", curtime->tm_hour);
	printf("tm_mday: %d\n", curtime->tm_mday);
	printf("tm_mon: %d\n", curtime->tm_mon);
	printf("tm_year: %d\n", curtime->tm_year);
	printf("tm_wday: %d\n", curtime->tm_wday);
	printf("tm_yday: %d\n", curtime->tm_yday);
	printf("tm_isdst: %d\n", curtime->tm_isdst);

	curtime->tm_min=curtime->tm_min+1;

	time_t newTime=mktime(curtime);
	printf("\nnew time: %ld\n", newTime);
	return 0;
}
