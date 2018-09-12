#include <iostream>
using namespace std;

struct student
{
	int id;
	char *name;
	float percentage;

	void showcout();

};


void student::showcout()
{
	cout << id << name << percentage << endl;
}

int main()
{
	student s = { 1,"°£¼®Çö",5 };
	s.showcout();

}