# color_log
color console log

# usage

this is add log with color escape sequence only tty

see sample program test.c test2.c

# sample

build
```
$ gcc -o test test.c
$ gcc -o test2 test2.c color_log.c
```

run output console or redirect
```
./test
./test2
./test2 | cat
```
