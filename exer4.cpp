#include <iostream>

void EvaluateOutput()
{
	int sum = 0, val = 0;;
	for (int i = -100; i <= 100; ++i)
	{
		++val;
		sum += i;
	}
	std::cout << "Value of sum from -100 to 100 is: " << sum << std::endl;

	/*
	* i [-100,-1], sum goes from -100 up to -5050, for loop cicle count 100
	* i [0,100], sum goes from -5050 to 0, for loop cicle count 201
	*/
}

void SumNumbers(int start, int end)
{
	int sum = 0;
	for (int i = start; i <= end; ++i)
	{
		sum += i;
	}
	std::cout << "Sum of 50 to 100 is: " << sum << std::endl;

	system("pause");

	for (int i = 10; i >= 0; i--)
	{
		std::cout << i << std::endl;
	}
}

int main()
{
	EvaluateOutput(); //Task: 1.12
	system("pause");

	SumNumbers(50, 100); //Task: 1.13
	system("pause");


	return 0;
}