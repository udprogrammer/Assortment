#include<stdio.h>

main()
{
	int i,j,last,n=3,a[]={1,2,3,4,5,6,7,9,10};
	int length = sizeof(a)/sizeof(a[0]);
	
	printf("Values of array = \n");
	for(i=0;i<length;i++)
	{
		printf("%d ",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		last=a[length-1];
		
		for(j=length-1;j>0;j--)
		{
		    a[j]=a[j-1];
		}
		a[0]=last;
	}
	printf("\n");
	
	printf("Right Rotation array = \n");
	for(i=0;i<length;i++)
	{
		printf("%d ",a[i]);
	}
}
