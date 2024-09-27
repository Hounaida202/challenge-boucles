#include <stdio.h>

int main()
{int n,i=0,count=0;
	printf("taper le nombre des des paires que vous sauhaitez :) \n");
	scanf("%d",&n);
printf("\n");
if(n<=0){
    printf(" s'il vous plait tapez un autre :( \n");
}else
	while(count<n){
        if(i%2==0){
            printf("%d\n \n",i);
            count++;
        }
i++;
	}

}
