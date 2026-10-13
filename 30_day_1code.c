#include <stdio.h>

int main(void)
{
	int numbers[100];
	int size;
	int even_count = 0;
	int odd_count = 0;

	printf("Enter the number of elements: ");
	scanf("%d", &size);

	if (size < 1 || size > 100)
	{
		printf("Please enter a size between 1 and 100.\n");
		return 0;
	}

	printf("Enter %d elements:\n", size);
	for (int index = 0; index < size; index++)
	{
		scanf("%d", &numbers[index]);

		if (numbers[index] % 2 == 0)
		{
			even_count++;
		}
		else
		{
			odd_count++;
		}
	}

	printf("Even numbers = %d\n", even_count);
	printf("Odd numbers = %d\n", odd_count);

	return 0;
}
