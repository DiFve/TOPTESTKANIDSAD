#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<string.h>
struct data
{
	char name[99999];
	int id, score;
};
data info[100];
void bubbleSort(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			data temp;
			if (info[j].id > info[i].id)
			{
				temp = info[j];
				info[j] = info[i];
				info[i] = temp;
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d, %[^,\n], %d", &info[i].id, &info[i].name, &info[i].score);
	}
	//	printf("\n");

	for (int i = 0; i < n; i++)
	{
		printf("%06d %s %d", info[i].id, info[i].name, info[i].score);
		if (i != n - 1)	printf("\n");
	}
	return 0;
}