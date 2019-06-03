#include<stdio.h>
main()
{
	int arr[100],n,i,x,l,r,m;
	printf("Enter no. of elements ");
	scanf("%d",&n);
	printf("Enter sorted array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the required element ");
	scanf("%d",&x);
	l=0;
	r=n;
	while(1)
	{
		int m=(l+r)/2;
		if(x==arr[m])
		{
			printf("%d",m);
			break;
		}
		else if(x<arr[m])
		{
			r=m;
		}
		else
		{
			l=m;
		}
	}
}
