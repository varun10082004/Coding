#include<stdio.h> 
int main()
{
	int i,j,n,temp,A[25];
printf("Enter the number of element");
scanf("%d",&n);
	printf("enter the %d elements");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	for(i=1;i<n;i++) 
	{
		temp=A[i];
		j=i-1;
		while(j>=0 &&temp<A[j])
			{
				A[j+1]=A[j];
				j=j-1;
			}
		      
			    A[j+1]=temp;
		
	}
	printf("ordered of sorted elements");
	for(i=0;i<n;i++)
	{
	 printf("%d ",A[i]);
    
	}
	return 0;
}

