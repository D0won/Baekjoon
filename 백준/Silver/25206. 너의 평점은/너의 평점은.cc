#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

typedef struct
{
	char name[51];
	double credit;
	char grade[3];
}Hun;

int main(void)
{
	Hun arr[20];
	double sumC = 0.0, sum = 0.0;
	for (int t = 0; t < 20; t++)
	{
		scanf("%s %lf %s", arr[t].name, &arr[t].credit, arr[t].grade);

		if (strcmp(arr[t].grade, "A+") == 0)
		{
			sum += arr[t].credit * 4.5;
			sumC += arr[t].credit;
		}
		else if (strcmp(arr[t].grade, "A0") == 0)
		{
			sum += arr[t].credit * 4.0;
			sumC += arr[t].credit;
		}
		else if (strcmp(arr[t].grade, "B+") == 0)
		{
			sum += arr[t].credit * 3.5;
			sumC += arr[t].credit;
		}
		else if (strcmp(arr[t].grade, "B0") == 0)
		{
			sum += arr[t].credit * 3.0;
			sumC += arr[t].credit;
		}
		else if (strcmp(arr[t].grade, "C+") == 0)
		{
			sum += arr[t].credit * 2.5;
			sumC += arr[t].credit;
		}
		else if (strcmp(arr[t].grade, "C0") == 0)
		{
			sum += arr[t].credit * 2.0;
			sumC += arr[t].credit;
		}
		else if (strcmp(arr[t].grade, "D+") == 0)
		{
			sum += arr[t].credit * 1.5;
			sumC += arr[t].credit;
		}
		else if (strcmp(arr[t].grade, "D0") == 0)
		{
			sum += arr[t].credit * 1.0;
			sumC += arr[t].credit;
		}
		else if (strcmp(arr[t].grade, "F") == 0) 
		{
			sum += arr[t].credit * 0.0;
			sumC += arr[t].credit;
		}
		else
			continue;
	}

	printf("%lf", sum / sumC);
	return 0;
}


