#include <stdio.h>

int main()
{
	// One dimensional array
	/*
	int marks[10], sum = 0;
	printf("Enter marks of 10 students: \n");
	for (int i = 0; i < 10; i++)
	{
		printf("Marks of student %d: ", i + 1);
		scanf("%d", &marks[i]);
		sum = sum + marks[i];
	}
	int average = sum / 10;
	printf("The average marks of students is %d", average);

	return 0;
	*/

	// Two dimensional array
	int Matrice[3][3];
	printf("This Program will print numbers you enter in matrice form : \n\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("Enter any numbers : ");
			scanf("%d", &Matrice[i][j]);
				}
	}
	printf("\n\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", Matrice[i][j]);
		}
		printf("\n");
	}

	return 0;
}