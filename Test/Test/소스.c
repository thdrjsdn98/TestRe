#include<stdio.h>

int main()
{
	/*int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d", a + b);*/

	int arr[5];
	int max, min, sum, i;

	for (i = 0; i < 5; i++)
	{
		printf("입력: ");
		scanf_s("%d", &arr[i]);
	}

	max = min = sum = arr[0];
	for (i = 1; i < 5; i++)
	{
		sum += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}

	printf("최대값: %d \n", max);
	printf("최소값: %d \n", min);
	printf("총 합: %d \n", sum);
	return 0;
}