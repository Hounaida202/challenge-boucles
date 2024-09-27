#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,p;
    printf("taper un nombre:\n");
    scanf("%d",&n);

    for(i=1;i<11;i++){
        p=i*n;
        printf("%d*%d=%d\n",i,n,p);
    }
    return 0;
}
