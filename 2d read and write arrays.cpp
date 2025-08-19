#include<stdio.h>

int main()
{
int a[2][3]={1,2,3,4,7,6},i,j;
printf("matrix is \n");
for(i=0;i<3;i++)
{
	for(j=0;j<2;j++)
	{
	    printf("a[%d][%d] ",j,i);
	printf("%d ",a[j][i]);
	}
	printf("\n");
}
return 0;

}
