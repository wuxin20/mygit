#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 8, y = 10;
	int a = x + y;
	printf("x+y=%d\n", a);
	system("spause");
	return 0;
}

/*
int* twoSum(int* nums, int numsSize, int target){
	static int a[2] = { 0 };
	for (int i = 0; i<numsSize - 1; i++)
	{
		for (int j = i + 1; j<numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				a[0] = i;
				a[1] = j;
				return a;
			}
		}
	}
	return 0;
}
*/


/*
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	int* res = (int *)malloc(sizeof(int)* 2);
	for (int i = 0; i < numsSize - 1; i++)
	{
		for (int j = i + 1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				res[0] = i;
				res[1] = j;
				*returnSize = 2;
				return res;
			}
		}
	}
	return res;
}
*/