#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
	int studentNum, totalScore = 0;
	int * studentScore;
	int i;

	std::cout << "insert studentNum : ";
	std::cin >> studentNum;
	// studentScore = (int *)malloc(sizeof(int) * studentNum);
	studentScore = new int[studentNum];

	for (i = 0; i < studentNum; i++)
	{
		std::cout << i + 1 << "student num :";
		std::cin >> studentScore[i];
		totalScore += studentScore[i];
	}

	std::cout << "average :" << totalScore / studentNum << std::endl;
	// free(studentScore);
	delete[] studentScore;
	return 0;
}
