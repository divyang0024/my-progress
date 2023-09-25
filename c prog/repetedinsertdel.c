#include <stdio.h>
int main()
{
	int size;
	char choice;
	printf("Enter number of element:");
	scanf("%d", &size);
	int i, ar[100];
	for (i = 0; i < size; i++)

	{
		printf("Enter element at index(%d)=", i);
		scanf("%d", (ar + i));
	}
	int insdel;
ret:
	printf("=======================================================================\n");
	printf("To insert array element enter:1\nTo delete array element press:2\nTo print the array Element enter:3\n");
	printf("========================================================================\n");
	scanf("%d", &insdel);

	int upper = size - 1, lower = 0, insert_num, ind;

	switch (insdel)
	{
	case 1:
	{
		do
		{

			if (size < 100)
			{
				printf("Enter element you want to insert:");
				scanf("%d", &insert_num);
				printf("\n");
				printf("Enter index of this element:");
				scanf("%d", &ind);
				lower = ind + 1;
				for (i = upper + 1; i >= lower; i--)
				{
					ar[i] = ar[i - 1];
				}
				ar[ind] = insert_num;
				size++;
				printf("\n Element sucessfully inserted\n\n");
				printf("You want to inset more element enter Y otherwise enter N:");
				scanf(" %c", &choice);
			}
			else
			{
				choice == 'N';
				printf("\nNo more space avaiable in array:\n");
			}
		} while (choice == 'y' || choice == 'Y');
		goto ret;
		break;
	}
	case 2:
	{

		do
		{
			if (size > 0)
			{
				printf("Enter element index to delete the element:");
				scanf("%d", &ind);
				lower = ind;
				for (i = lower; i < upper; i++)
				{
					ar[i] = ar[i + 1];
				}
				ar[upper] = 0;
				size--;
				printf("\n Element delete sucessfully:\n");
				printf("If you want to delete more elemnt press Y otherwise enter N:\n");
				scanf(" %c", &choice);
			}
			else
			{
				printf("No more element to delete\n");
				choice = 'N';
			}
		} while (choice == 'Y' || choice == 'y');
		goto ret;
		break;
	}
	default:
	{
		printf("Elements of array are\n\n");
		if (size == 0)
			printf("No element found in the array");
		else
		{
			for (i = 0; i < size; i++)
				printf("[%d]\n", ar[i]);
		}
	}
	}
	return 0;
}