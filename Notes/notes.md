# Basic
### `time_t time(NULL)`

>`time(NULL)` returns the current time in as a long integer.

This function returns the number of seconds that have elapsed since 1 Jan 1970 at midnight(this date is also called the epoch).

The `sleep()` function defined in `unistd.h` pauses the program for the specified number of seconds.

```c
sleep(2);
```
will make the program for 2 seconds.

### `double difftime(time_t latest, time_previous);`
>This function returns the difference between two times. It returns a double value.

<img src="https://private-user-images.githubusercontent.com/96164229/237073050-4dee5f85-eb99-4d84-8ba2-80c951023f8e.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJrZXkiOiJrZXkxIiwiZXhwIjoxNjgzOTY0OTc5LCJuYmYiOjE2ODM5NjQ2NzksInBhdGgiOiIvOTYxNjQyMjkvMjM3MDczMDUwLTRkZWU1Zjg1LWViOTktNGQ4NC04YmEyLTgwYzk1MTAyM2Y4ZS5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBSVdOSllBWDRDU1ZFSDUzQSUyRjIwMjMwNTEzJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDIzMDUxM1QwNzU3NTlaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT0xYTRmMzAzOTM1ZGYxYWM3MDg4YzI1NzM1ZWVjYTYzMDU2MTg3NTYxOThjMWQzNTIyMjYwNjgwNDNmMDU3NDRmJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.GHTNNrDiXrECcwGmFbb2eTXkbZ88igLcVClQn1_kNGE" width="60%" height="60%">

### `char*ctime(time_t*)`
>It's used to print the time in a pretty format as a string.

<img src="https://private-user-images.githubusercontent.com/96164229/237073084-dc2f9c26-aebb-41b1-b1aa-482e66ded45b.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJrZXkiOiJrZXkxIiwiZXhwIjoxNjgzNjI5MzAxLCJuYmYiOjE2ODM2MjkwMDEsInBhdGgiOiIvOTYxNjQyMjkvMjM3MDczMDg0LWRjMmY5YzI2LWFlYmItNDFiMS1iMWFhLTQ4MmU2NmRlZDQ1Yi5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBSVdOSllBWDRDU1ZFSDUzQSUyRjIwMjMwNTA5JTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDIzMDUwOVQxMDQzMjFaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT0xOTE2MTg1NTE2MTkwMTI4OWIxNWVhOTVkNDM4OWE5YTM2NjJhODhlMzgwOTc0MzIwNDc0YjdlZWI1Njk2NjY5JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.VomNXbHCa2jLHgk_hjxSGtKOSg_lBUFPmA6VTsF0tlg" width="60%" height="60%">

### `struct tm*gmtime(time_t*);`
>Returns a pointer to the struct tm containing information about hour, minutes, seconds, year, etc.

Members of struct tm,
```c
struct tm
{
    int tm_sec;                 //represents seconds (0, 59)
    int tm_min;                 //represents minutes (0, 59)
    int tm_hour;                //represents hour (0, 23)
    int tm_mday;                //represents day of a month (1, 31)
    int tm_mon;                 //represents months (0, 11)
    int tm_year;                //represents year since 1900
    int tm_wday;                //represents days (0, 6)
    int tm_yday;                //represents days since January 1(0,365)
    int tm_isdst;               //represents daylight saving time flag
/*
tm_isdst is positive is in effect,
tm_isdst is zero if not in effect,
tm_isdst is negative if otherwise.
 */
};

```
<img src="https://private-user-images.githubusercontent.com/96164229/237077987-4cf3fcc3-6647-4b1c-8591-8c289123e3fb.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJrZXkiOiJrZXkxIiwiZXhwIjoxNjgzNjMwNTY3LCJuYmYiOjE2ODM2MzAyNjcsInBhdGgiOiIvOTYxNjQyMjkvMjM3MDc3OTg3LTRjZjNmY2MzLTY2NDctNGIxYy04NTkxLThjMjg5MTIzZTNmYi5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBSVdOSllBWDRDU1ZFSDUzQSUyRjIwMjMwNTA5JTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDIzMDUwOVQxMTA0MjdaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT05ZGIxMDg0NDAwMDZmZmEwNWRiNGNhZjMzODg5NzgyN2QxNDA0ZWE4M2NiMDM1Mjg2YjkwZjMzZGZjNGRkNjE2JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.WVTtOSY3s9bDRRg1BRhrS0Z1ucuAGbTGYLC0jlkCTqo" width="60%" height="60%">

Since the time returned is in Greenwich Mean Time, so the hours donot match.

The tm_year is the number of years that have passed since 1900.


### `struct tm*localtime(time_t*);`
>Same as gmtime() but it returns the local time.

<img src="https://private-user-images.githubusercontent.com/96164229/237082004-c0c9a042-5985-46f8-81b3-04d3133efc9b.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJrZXkiOiJrZXkxIiwiZXhwIjoxNjgzNjMxNjIyLCJuYmYiOjE2ODM2MzEzMjIsInBhdGgiOiIvOTYxNjQyMjkvMjM3MDgyMDA0LWMwYzlhMDQyLTU5ODUtNDZmOC04MWIzLTA0ZDMxMzNlZmM5Yi5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBSVdOSllBWDRDU1ZFSDUzQSUyRjIwMjMwNTA5JTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDIzMDUwOVQxMTIyMDJaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT0yNzZkMjhkZDlhYjI5MDQ1ZjQ1OGQxMjNjZmJjNDdmODM2ZGFiM2Y0M2UyODMzZDJkYTUwZGE3MGVkMzFlOWY3JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.IVbXA_LIkuaIQtEBmE_FwvaM5ZNYSCFP91TRYiKojxM" width="60%" height="60%">

### `char*asctime(struct tm*);`
>It's just like ctime() but it works with variables of type `struct tm`.

<img src="https://private-user-images.githubusercontent.com/96164229/237083621-c28ad280-f188-4cec-8ecb-d01aa5901262.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJrZXkiOiJrZXkxIiwiZXhwIjoxNjgzNjMyMTc1LCJuYmYiOjE2ODM2MzE4NzUsInBhdGgiOiIvOTYxNjQyMjkvMjM3MDgzNjIxLWMyOGFkMjgwLWYxODgtNGNlYy04ZWNiLWQwMWFhNTkwMTI2Mi5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBSVdOSllBWDRDU1ZFSDUzQSUyRjIwMjMwNTA5JTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDIzMDUwOVQxMTMxMTVaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT03MWZmNDdhYmUzYjRiZTdiODM1MzUxODc0NjUzNjQ1MDI3ZWJiNzIwNzc2ZWQzYTdlMDc3NzhiZTVjMmFkNWUzJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.UGMTn3HG1jLGxqUfzw0ux2KG0QdEFSDSR6mO9AE-IwM" width="60%" height="60%">

### `time_t mktime(struct tm*);`
>Converts `struct tm` type variable to `time_t` variable and returns it.

<img src="https://private-user-images.githubusercontent.com/96164229/238123197-ad6aacc5-793b-440b-8b11-7d1d2d1051f0.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJrZXkiOiJrZXkxIiwiZXhwIjoxNjgzOTY1OTMxLCJuYmYiOjE2ODM5NjU2MzEsInBhdGgiOiIvOTYxNjQyMjkvMjM4MTIzMTk3LWFkNmFhY2M1LTc5M2ItNDQwYi04YjExLTdkMWQyZDEwNTFmMC5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBSVdOSllBWDRDU1ZFSDUzQSUyRjIwMjMwNTEzJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDIzMDUxM1QwODEzNTFaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT0yOTM1OGU2NTBlNTY2ZmZhNGI5YjBiZDJlMTNiYjE3NmZhODI3NzY4MTI2MjRiMWEzY2JiZWI1MmMyMjg3YTcwJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.ahTyRUT6DySf9_M19YmwF0dWs0o2lijHHpV1IQeogb0" width="60%" height="60%">

Notice the output of [7.c]()

**Output:**

<img src="https://private-user-images.githubusercontent.com/96164229/238125403-30721bc4-ca57-46c8-84d5-cc29cfd74315.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJrZXkiOiJrZXkxIiwiZXhwIjoxNjgzOTY5MDI5LCJuYmYiOjE2ODM5Njg3MjksInBhdGgiOiIvOTYxNjQyMjkvMjM4MTI1NDAzLTMwNzIxYmM0LWNhNTctNDZjOC04NGQ1LWNjMjljZmQ3NDMxNS5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBSVdOSllBWDRDU1ZFSDUzQSUyRjIwMjMwNTEzJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDIzMDUxM1QwOTA1MjlaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT05NGQ2MzM1MWQ1ZGQ5NTI2ODIwZTQwNWJiYTU2NjNmMWUyODQyMWI4OGIxMjg3MjMwMzlhZDE3MTE1MWFjZjllJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.jC8_mAodwW-HJLdG9gN6KGsitJH9g46S4g2_yIIHhzE" width="60%" height="60%">

In the code, I incremented `tm_min` by 1, actually here `tm_min` was not incremented by the number `1` but by **1 min**.

That's why we can see 1683966065 at the bottom.

### `size_t strftime(char*, size_t, const char*, struct tm*)`
>Converts time into string format and allows us to customize it using place holders. Also, it returns the length of the string format of the time.

[8.c](https://github.com/C0DER11101/PlayingWithTimeInC/blob/TimeC/tests/8.c).

**Output:**

<img src="https://private-user-images.githubusercontent.com/96164229/238125831-4ba1dc2f-fe8e-4b7b-95c2-fba5e64c8904.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJrZXkiOiJrZXkxIiwiZXhwIjoxNjgzOTY5Nzc1LCJuYmYiOjE2ODM5Njk0NzUsInBhdGgiOiIvOTYxNjQyMjkvMjM4MTI1ODMxLTRiYTFkYzJmLWZlOGUtNGI3Yi05NWMyLWZiYTVlNjRjODkwNC5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBSVdOSllBWDRDU1ZFSDUzQSUyRjIwMjMwNTEzJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDIzMDUxM1QwOTE3NTVaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT0xZDY0ZTkzNzczMjZjYzQwMWMwZjI5NDhkMGRkY2ZlNGJkYWUyY2E4MzZiNDkwZjZhYzY3ZDNhYjg3OGVlYjI2JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.AFAyY1ZpZIrC4_0ffm3ip4g9Zny5XoIKoP_TkbuoJ7Q" width="60%" height="60%">

### `clock_t clock();`
>Returns the number of clocks that have elapsed. We can use this function to measure how long a program takes to perform a specific task.

[9.c](https://github.com/C0DER11101/PlayingWithTimeInC/blob/TimeC/tests/9.c).

```c
clock_t start, end;
start=clock();
for(int i=0; i<1000; i++);
end=clock();

double total=(double)(end-start)/CLOCKS_PER_SEC;
```

`start=clock();` records the number of clock ticks that elapsed before entering the for loop.

`end=clock();` records the number of clock ticks that elapsed after exiting the for loop.

`double total=(double)(end-start)/CLOCKS_PER_SEC;` will give us the number of seconds the for loop ran.

**Output:**

<img src="https://private-user-images.githubusercontent.com/96164229/238126705-a4ec2a0d-0510-46dc-b3fb-ac446a22251b.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJrZXkiOiJrZXkxIiwiZXhwIjoxNjgzOTcxMTU0LCJuYmYiOjE2ODM5NzA4NTQsInBhdGgiOiIvOTYxNjQyMjkvMjM4MTI2NzA1LWE0ZWMyYTBkLTA1MTAtNDZkYy1iM2ZiLWFjNDQ2YTIyMjUxYi5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBSVdOSllBWDRDU1ZFSDUzQSUyRjIwMjMwNTEzJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDIzMDUxM1QwOTQwNTRaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT05Y2E0YzdkMjJlOGUzYjRiMmU2NWNjMjgyMWNiYzYxYTcxMThhYzgxYzQ2ZDAzYzRmNzA4MWZkNWI1NjM5MDhhJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.o1RW5E2OyRcSAkqRxRz-T0UVxUpP-0Rtzn0VeInsoGs" width="60%" height="60%">

<p align="center">
&#9678; &#9678; &#9678;
</p>
