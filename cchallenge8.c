#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=0;
    long n;
printf("taper un chiffre:");
scanf("%ld",&n);
while(n>0){
    n=n/10;
i++;
}
printf("%d",i);

}
