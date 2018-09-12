#include <iostream>

int main()
{
	int x = 123;
	std::cout << "Before cin" << x << std::endl;

	std::cin >> x;

	std::cout << "After cin" << x << std::endl;

}

