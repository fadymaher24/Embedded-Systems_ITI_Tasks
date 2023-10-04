// Write a C code that define 3 int variables x, y and z and 3 pointers to int p, q
// and r. Set x, y, z to three distinct values. Set p, q, r to the addresses of x, y, z
// respectively.
// a- Print with labels the values of x, y, z, p, q, r, *p, *q, *r.
// b- Print the message: Swapping pointers.
// c- Execute the swap code: r = p; p = q; q = r;
// d- Print with labels the values of x, y, z, p, q, r, *p, *q, *r.

#include <stdio.h>


int main(int argc, char const *argv[])
{
    int x,y,z;
    int *p,*q,*r;
    x=1;
    y=2;
    z=3;
    p = &x;
    q = &y;
    r = &z;
    printf("Swapping pointers.\n");
    int *temp=r;
    r = p;
    p = q;
    q = temp;
    printf("x = %d\ny = %d\nz = %d\np = %d\nq = %d\nr = %d\n*p = %d\n*q = %d\n*r = %d\n",x,y,z,p,q,r,*p,*q,*r);
    return 0;
}