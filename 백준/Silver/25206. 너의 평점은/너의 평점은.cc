#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

typedef struct
{
	char name[51];
	double credit;
	char grade[3];
}Hun;

double SumOfCredit(Hun  *a);
double Sum(Hun *w);
double ConvertGrade(char* c);
int main(void)
{
	Hun arr[20];
	double sumC = 0, sum = 0;
	for (int t = 0; t < 20; t++)
	{
		scanf("%s %lf %s", arr[t].name, &arr[t].credit, arr[t].grade);
	}
	sumC = SumOfCredit(arr);
	sum = Sum(arr);
	printf("%lf\n", sum / sumC);

	return 0;
}

double SumOfCredit(Hun * a)
{
	double sum = 0;

	for (int i = 0; i < 20; i++)
	{	if(strcmp(a[i].grade, "P") != 0)
			sum += a[i].credit;
	}
	return sum;
}

double Sum(Hun * w)
{

	double sum = 0;
	for (int i = 0; i < 20; i++)
	{	if(strcmp(w[i].grade, "P") != 0)
			sum += (w[i].credit * ConvertGrade(w[i].grade));
	}

	return sum;
}

double ConvertGrade(char* c)
{
	
	if (strcmp(c, "A+") == 0)
		return 4.5;
	else if (strcmp(c, "A0") == 0)
		return 4.0;
	else if (strcmp(c, "B+") == 0)
		return 3.5;
	else if (strcmp(c, "B0") == 0)
		return 3.0;
	else if (strcmp(c, "C+") == 0)
		return 2.5;
	else if (strcmp(c, "C0") == 0)
		return 2.0;
	else if (strcmp(c, "D+") == 0)
		return 1.5;
	else if (strcmp(c, "D0") == 0)
		return 1.0;
	else if (strcmp(c, "F") == 0)
		return 0.0;
}