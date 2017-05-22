#include <stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
	int i,j,sp,star,n,k=97;
	scanf("%d",&n);
	
		
	for(sp=n-1,star=1,i=1;i<=n;i++){
		for(j=1;j<=sp;j++){
			printf(" ");
		}
		for(j=1;j<=star;j++){
			
			printf("%c",k);
		}
		k++;
		printf("\n");
		sp--;
		star+=2;
	}
	star-=4;
	for(sp=1,i=1;i<=n;i++){
		for(j=1;j<=sp;j++){
			printf(" ");
		}
		for(j=1;j<=star;j++){
			printf("*");
		}
		printf("\n");
		sp++;
		star-=2;
   }
	getch();
	return 0;
}
