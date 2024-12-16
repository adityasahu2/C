// int process(int (*pf)(int a, int b));
// A function process that accepts a function pointer pf, which points to a function taking two ints and returning an int.

// int (*fun(int, void (*ptr)()))();
// A function fun that takes an int and a function pointer ptr (which points to a void-returning function). fun returns a function pointer to a function returning an int.

// int *(*p)(int (*a)[]);
// A function pointer p that takes a pointer to an array a (unknown size) and returns a pointer to int.

// int (*p)[10];
// p is a pointer to an array of 10 integers.

// float *p[20];
// p is an array of 20 pointers to float.

// int p(char *a);
// A function p that takes a char pointer and returns an int.

// int (*p(char * a))[10];
// A function p that takes a char pointer and returns a pointer to an array of 10 integers.

// int *(*p[10])(char *a);
// p is an array of 10 pointers to functions that take a char pointer and return a pointer to int.