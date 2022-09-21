// wap to print the following output 
// .....*
// ....***
// ...*****
// ..*******
// .*********


#include<stdio.h>

int main()
{
    int a,b,e,f;
    for(e=5,f=1;e>=1,f<=9;e--,f+=2)
    {
    for(a=1;a<=e;a++)
    printf(".");
    for(b=1;b<=f;b++)
    printf("*");
    printf("\n");
    
    }
    return 0;
}