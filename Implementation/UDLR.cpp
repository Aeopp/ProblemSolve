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

void main_impl()
{
	int Col{ 1 }, Row{ 1 };
	int N{ 0 };
	std::cin >> N;
	std::string Str{};
	std::getline(std::cin, Str);
	for (const auto& Token : Str)
	{
		if (Token != ' ')
		{
			switch (Token)
			{
			case 'U':
				--Row;
				break;
			case 'D':
				++Row;
				break;
			case 'L':
				--Col;
				break;
			case 'R':
				++Col;
				break;
			default:
				break;
			}
			std::cout << "Token : " << Token << std::endl;
			std::cout << "Before Col : " << Col << std::endl;
			std::cout << "Before Row : " << Row << std::endl;

			Col = std::clamp(Col, 1, N);
			Row = std::clamp(Row, 1, N);

			std::cout << "After Col : " << Col << std::endl;
			std::cout << "After Row : " << Row << std::endl;
		}
	}


	std::cout << " Row : " << Row << std::endl;
	std::cout << " Col : " << Col << std::endl;

};

int main()
{
	main_impl();
}