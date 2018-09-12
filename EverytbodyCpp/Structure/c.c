#include <stdio.h>
struct student
{
	int id;
	char *name;
	float percentage;
};

int main1()
{
	struct student s = { 1,"±èÃ¶¼ö",90.5 };
	printf("%d, %s, %f", s.id, s.name, s.percentage);
}