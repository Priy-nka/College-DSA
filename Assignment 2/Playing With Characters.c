//https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{ 
    char ch,s[100],sen[100];
    scanf("%c",&ch);
    printf("%c",ch);
    scanf("%s",s);
    printf("\n%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("\n%s",sen);
    return 0;
}
