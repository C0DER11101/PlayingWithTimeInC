#include<stdio.h>
#include<unistd.h>
#include<time.h>

int main(void)
{
	time_t now=time(NULL);

	char*str=ctime(&now);
	printf("Current time: %s\n", str);

	struct tm*gm_time=gmtime(&now);

	printf("tm_sec: %d\n", (*gm_time).tm_sec);
	printf("tm_min: %d\n", gm_time->tm_min);
	printf("tm_hour: %d\n", gm_time->tm_hour);
	printf("tm_mday: %d\n", gm_time->tm_mday);
	printf("tm_mon: %d\n", gm_time->tm_mon);
	printf("tm_year: %d\n", gm_time->tm_year);
	printf("tm_wday: %d\n", gm_time->tm_wday);
	printf("tm_yday: %d\n", gm_time->tm_yday);
	printf("tm_isdst: %d\n", gm_time->tm_isdst); // dst -> daylight savings time
	return 0;
}
