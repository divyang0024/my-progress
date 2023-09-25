#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr,size;
	
	printf("How many you want to create of array:");
	scanf("%d",&size);
	ptr=(int *)malloc(size*sizeof(int));
	ptr=realloc(ptr,2*4);
	int i;
	if(ptr==NULL)
	printf("Array not create sucessfully");
	else
	{
		for(i=0;i<size+2;i++)
		{
			printf("Enter element Num %d=",i+1);
			scanf("%d",&ptr[i]);
		}
	}
	
	for(i=0;i<size+2;i++)
		{
			printf("Enter element Num %d=%d\n",i+1,ptr[i]);
			
		}
		printf("%d",sizeof(ptr));
}
