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

<img src="https://user-images.githubusercontent.com/96164229/240450481-e58bc851-4ce7-4d6f-9d3e-742917723bf5.png" width="60%" height="60%">

### `char*ctime(time_t*)`
>It's used to print the time in a pretty format as a string.

<img src="https://user-images.githubusercontent.com/96164229/240450558-9bd30d38-a772-440a-b2a0-ea0ffad9bcc7.png" width="60%" height="60%">

### `struct tm*gmtime(time_t*);`
>Returns a pointer to the `struct tm` containing information about hour, minutes, seconds, year, etc.

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
<img src="https://user-images.githubusercontent.com/96164229/240450585-ab8dc380-cad3-4e6f-8846-dc997d0ae590.png" width="60%" height="60%">

Since the time returned is in Greenwich Mean Time, so the hours donot match.

The tm_year is the number of years that have passed since 1900.


### `struct tm*localtime(time_t*);`
>Same as gmtime() but it returns the local time.

<img src="https://user-images.githubusercontent.com/96164229/240450613-aad51ba4-e070-4a09-a04e-f2caa012da21.png" width="60%" height="60%">

### `char*asctime(struct tm*);`
>It's just like ctime() but it works with variables of type `struct tm`.

<img src="https://user-images.githubusercontent.com/96164229/240450662-f51b7715-1fcb-483a-bc9a-aa49728a7919.png" width="60%" height="60%">

### `time_t mktime(struct tm*);`
>Converts `struct tm` type variable to `time_t` variable and returns it.

<img src="https://user-images.githubusercontent.com/96164229/240450712-5b9bba54-d7a3-4c95-870f-ffeaa1c2b46b.png" width="60%" height="60%">

Notice the output of [7.c](https://github.com/C0DER11101/PlayingWithTimeInC/blob/TimeC/tests/7.c)

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/240450759-6d75d928-a6fe-416a-aec7-483c62505dac.png" width="60%" height="60%">

In the code, I incremented `tm_min` by 1, actually here `tm_min` was not incremented by the number `1` but by **1 min**.

That's why we can see 1683966065 at the bottom.

### `size_t strftime(char*, size_t, const char*, struct tm*)`
>Converts time into string format and allows us to customize it using place holders. Also, it returns the length of the string format of the time.

[8.c](https://github.com/C0DER11101/PlayingWithTimeInC/blob/TimeC/tests/8.c)

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/240450812-7fe8d67c-1464-4c75-b834-f9547dc1a57d.png" width="60%" height="60%">

### `clock_t clock();`
>Returns the number of clocks that have elapsed. We can use this function to measure how long a program takes to perform a specific task.

[9.c](https://github.com/C0DER11101/PlayingWithTimeInC/blob/TimeC/tests/9.c)

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

<img src="https://user-images.githubusercontent.com/96164229/240450841-d6e7578d-4c19-4594-ae9f-edd3389b0da5.png" width="60%" height="60%">

<p align="center">
&#9678; &#9678; &#9678;
</p>
