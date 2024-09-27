#include <stdio.h>

int main()
{int n,i=1,count=0;
	printf("taper le nombre des des impaires que vous sauhaitez :) \n");
	scanf("%d",&n);
printf("\n");
if(n<=0){
    printf(" s'il vous plait tapez un autre :( \n");
}else
	while(count<n){
        if(i%2==1){
            printf("%d\n \n",i);
            count++;
        }
i++;
	}

}
