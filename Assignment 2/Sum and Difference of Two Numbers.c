//https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,c,d;
    float a1,b1,c1,d1;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&a1,&b1);
    c=a+b;
    d=a-b;
    c1=a1+b1;
    d1=a1-b1;
    printf("%d %d\n%.1f %.1f",c,d,c1,d1);
    
    return 0;
}
