#ifndef mymacros_h
#define mymacros_h

#define SQR(x) ((x) * (x))
#define CUBE(x) (SQR(x) * (x))
#define MAX2(x, y) (((x) > (y)) ? (x) : (y))
#define MAX3(x, y, z) (MAX2(MAX2(x, y), z))

#endif