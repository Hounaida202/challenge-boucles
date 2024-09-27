#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,n,i=1;
    long long p=1;
    printf("taper un nombre:\n");
    scanf("%d",&b);

    printf("taper un nombre:\n");
    scanf("%d",&n);

   while(i<=n){
  p=p*b;
  i++;}
  printf("%lld",p);

}