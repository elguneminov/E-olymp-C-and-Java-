#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[5];
int main(int argc, char *argv[])
{
   gets(a);

long n;
 n=strlen(a);

long i,l,s=0;
 for(i=0;i<n;i++)
    l=(a[1]-48)*10+(a[2]-48);
    printf("%ld\n",l);

 
 return 0;
}