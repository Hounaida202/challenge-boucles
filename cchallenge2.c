#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,p=1;
    printf("taper un nombre:\n");
    scanf("%d",&n);

    while(i<=n){
     p*=i;
     i++;}
     printf("%d\n",p);


    return 0;
}

