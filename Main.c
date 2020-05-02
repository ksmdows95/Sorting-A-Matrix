#include <stdio.h>

int main()
{
	int nums[] = { 56, 75, 99, 155, 911, 52, 65, 78, 112, 55, 345, 1, 12, 5};
	int boyut = sizeof(nums) / sizeof(nums[0]);
	int i = 0, j = 0;
	nums[i] = nums[j];
	for (i = 0; i < boyut; i++)
	{
		for (j = i + 1; j < boyut; j++)
		{
				if (nums[j] < nums[i])
				{
					int temp = nums[i];
					nums[i] = nums[j];
					nums[j] = temp;
				}
		}
		printf("%d\n", nums[i]);
	}
	
}