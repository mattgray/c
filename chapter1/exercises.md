# Chapter 1 exercises

## 1-1

Run the 'hello, world' program on your system. Experiment with leaving out parts of the program, to see what error messages you get.

No `include<stdio.h>`:

```
hello.c:3:3: warning: implicitly declaring library function 'printf' with type 'int (const char *, ...)' [-Wimplicit-function-declaration]
  printf("hello, world\n");
```

It looks like clang can fix this for you.

I always get this warning:

```
hello.c:1:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
main()
```

if i make it `int main()` it does not produce a warning.

```
hello.c:5:27: error: expected ';' after expression
  printf("hello, world\n")
                          ^
                          ;
1 error generated.
```

THis is a parse error. And so is missing out the braces of the function declaration.

## 1-2


