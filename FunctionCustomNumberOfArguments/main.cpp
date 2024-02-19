#include <iostream>
#include <initializer_list>

int add(std::initializer_list<int> iList)
{
	int sum = 0;
	for (int elem : iList)
	{
		sum += elem;
	}
	return sum;
}

int main()
{
	std::cout << add({1, 2, 3, 4}) << '\n';

	return 0;
}