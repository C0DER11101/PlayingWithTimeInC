# Basic
### time_t time(NULL)

>`time(NULL)` returns the current time in as a long integer.

This function returns the number of seconds that have elapsed since 1 Jan 1970 at midnight(this date is also called the epoch).

The `sleep()` function defined in `unistd.h` pauses the program for the specified number of seconds.

```c
sleep(2);
```
will make the program for 2 seconds.

### double difftime(time_t latest, time_previous);
>This function returns the difference between two times. It returns a double value.

<img src="https://private-user-images.githubusercontent.com/96164229/237073050-4dee5f85-eb99-4d84-8ba2-80c951023f8e.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJrZXkiOiJrZXkxIiwiZXhwIjoxNjgzNjI5MjkyLCJuYmYiOjE2ODM2Mjg5OTIsInBhdGgiOiIvOTYxNjQyMjkvMjM3MDczMDUwLTRkZWU1Zjg1LWViOTktNGQ4NC04YmEyLTgwYzk1MTAyM2Y4ZS5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBSVdOSllBWDRDU1ZFSDUzQSUyRjIwMjMwNTA5JTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDIzMDUwOVQxMDQzMTJaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT05NmUwNTA1MjRkOGM2MWFjMDgxZTZmZDkxZTNhZjRmMTNjZDBlMzE3Nzg2NGNhOWJiNGU4MDM1YzU2ZDExMTkwJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.wkGnjTlBkdfI9tH2GHDzVgFCDCSKU4tLpT0ZcO6fsXc" width="60%" height="60%">

### char*ctime(time_t*)
>It's used to print the time in a pretty format as a string.

<img src="https://private-user-images.githubusercontent.com/96164229/237073084-dc2f9c26-aebb-41b1-b1aa-482e66ded45b.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJrZXkiOiJrZXkxIiwiZXhwIjoxNjgzNjI5MzAxLCJuYmYiOjE2ODM2MjkwMDEsInBhdGgiOiIvOTYxNjQyMjkvMjM3MDczMDg0LWRjMmY5YzI2LWFlYmItNDFiMS1iMWFhLTQ4MmU2NmRlZDQ1Yi5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBSVdOSllBWDRDU1ZFSDUzQSUyRjIwMjMwNTA5JTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDIzMDUwOVQxMDQzMjFaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT0xOTE2MTg1NTE2MTkwMTI4OWIxNWVhOTVkNDM4OWE5YTM2NjJhODhlMzgwOTc0MzIwNDc0YjdlZWI1Njk2NjY5JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.VomNXbHCa2jLHgk_hjxSGtKOSg_lBUFPmA6VTsF0tlg" width="60%" height="60%">

### struct tm*gmtime(time_t*);
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


### struct tm*localtime(time_t*);
>Same as gmtime() but it returns the local time.

<img src="https://private-user-images.githubusercontent.com/96164229/237082004-c0c9a042-5985-46f8-81b3-04d3133efc9b.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJrZXkiOiJrZXkxIiwiZXhwIjoxNjgzNjMxNjIyLCJuYmYiOjE2ODM2MzEzMjIsInBhdGgiOiIvOTYxNjQyMjkvMjM3MDgyMDA0LWMwYzlhMDQyLTU5ODUtNDZmOC04MWIzLTA0ZDMxMzNlZmM5Yi5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBSVdOSllBWDRDU1ZFSDUzQSUyRjIwMjMwNTA5JTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDIzMDUwOVQxMTIyMDJaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT0yNzZkMjhkZDlhYjI5MDQ1ZjQ1OGQxMjNjZmJjNDdmODM2ZGFiM2Y0M2UyODMzZDJkYTUwZGE3MGVkMzFlOWY3JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.IVbXA_LIkuaIQtEBmE_FwvaM5ZNYSCFP91TRYiKojxM" width="60%" height="60%">

### char*asctime(struct tm*);
>It's just like ctime() but it works with variables of type `struct tm`.

<img src="https://private-user-images.githubusercontent.com/96164229/237083621-c28ad280-f188-4cec-8ecb-d01aa5901262.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJrZXkiOiJrZXkxIiwiZXhwIjoxNjgzNjMyMTc1LCJuYmYiOjE2ODM2MzE4NzUsInBhdGgiOiIvOTYxNjQyMjkvMjM3MDgzNjIxLWMyOGFkMjgwLWYxODgtNGNlYy04ZWNiLWQwMWFhNTkwMTI2Mi5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBSVdOSllBWDRDU1ZFSDUzQSUyRjIwMjMwNTA5JTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDIzMDUwOVQxMTMxMTVaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT03MWZmNDdhYmUzYjRiZTdiODM1MzUxODc0NjUzNjQ1MDI3ZWJiNzIwNzc2ZWQzYTdlMDc3NzhiZTVjMmFkNWUzJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.UGMTn3HG1jLGxqUfzw0ux2KG0QdEFSDSR6mO9AE-IwM" width="60%" height="60%">

<p align="center">
&#9678; &#9678; &#9678;
</p>
