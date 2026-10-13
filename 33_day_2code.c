#include <stdio.h>

int main(void)
{
	long long number;
	unsigned long long value;
	int digit_count[10] = {0};
	int most_frequent_digit = 0;
	int highest_count = 0;

	printf("Enter an integer: ");
	scanf("%lld", &number);

	if (number < 0)
	{
		value = (unsigned long long)(-(number + 1)) + 1;
	}
	else
	{
		value = (unsigned long long)number;
	}

	do
	{
		digit_count[value % 10]++;
		value /= 10;
	} while (value > 0);

	for (int digit = 0; digit <= 9; digit++)
	{
		if (digit_count[digit] > highest_count)
		{
			highest_count = digit_count[digit];
			most_frequent_digit = digit;
		}
	}

	printf("Digit %d occurs most often, appearing %d time(s).\n",
		   most_frequent_digit, highest_count);

	return 0;
}
