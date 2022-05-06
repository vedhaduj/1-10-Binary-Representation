#include <iostream>
#include <Windows.h>

void main()
{
	int n = 8;

	int R0 =  n % 2;// 0

	int five = n / 2; // after above divsion n is = 5

	int two = five / 2; // 2

	int R1 = five % 2; // 1

	int one = two / 2; // 1 

	int R2 = two % 2; // 0

	std::cout << "Binary Representation of " << n << std::endl;
 
	std::cout << one << R2 << R1 << R0 << std::endl;

    
}
