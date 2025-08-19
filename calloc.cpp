#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr=NULL,i,n;
	printf("enter n: ");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL){
	printf("no memory alloction");
	}
	else
	{
		for(i=0;i<n;i++){
		printf("Enter elements:");
		scanf("%d",ptr+i);
		}
	}
	for(i=0;i<n;i++)
	printf("%d \n",*(ptr+i));
	free(ptr=NULL);
}
