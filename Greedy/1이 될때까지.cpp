#include <iostream>
#include <string>
#include <thread>
#include <vector> 
#include <mutex>
#include <random>
#include <set > 
#include <ranges>
#include <algorithm>
#include <cmath>

int main()
{
	int32_t N, K;
	std::cin >> N >> K;
	int32_t DivideN{ 0 }, MiniusN{ 0 };

	while (N > 1)
	{
		int32_t CurMinius = N % K;

		if (!CurMinius) // 배수임
		{
			N = N / K;
			++DivideN;
		}
		else
		{
			N -= CurMinius;
			MiniusN += CurMinius;
		}
		std::cout << "Cur N : " << N << std::endl;
	}

	std::cout <<  " Solve : " << MiniusN + DivideN;
}