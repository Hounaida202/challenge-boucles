#include <stdio.h>
#include <stdlib.h>

int main()
{

    long n,ni=0;
printf("taper un chiffre:");
scanf("%ld",&n);
while(n>0){
ni=(ni*10)+  n%10;
n=n/10;
}
printf("%ld",ni);


}
