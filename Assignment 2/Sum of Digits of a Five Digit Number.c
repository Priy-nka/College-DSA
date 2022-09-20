//https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int m,sum=0;
    for (int i=n;i>0;i=i/10){
        m=i%10;
        sum+=m;
    }
    printf("%d",sum);
    return 0;
}
