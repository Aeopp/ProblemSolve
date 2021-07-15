#include <iostream>
#include <string>
#include <thread>
#include <vector> 
#include <mutex>
#include <random>
#include <set > 
#include <ranges>
#include <algorithm>

int main()
{
	int32_t Row, Col;
	std::cout << "Row Col 1 ~ 100\n";
	std::cin >> Row;
	std::cin >> Col;

	std::set<int32_t, std::greater<int32_t>> _Set{};
	int32_t RowMaxNumber{ std::numeric_limits<int32_t>::min() };
	for (int32_t i = 0; i < Row; ++i)
	{
		int32_t ColMinNumber{ std::numeric_limits<int32_t>::max() };
		for (int32_t j = 0; j < Col; ++j)
		{
			int32_t CurrentNumber{ 0};
			std::cin >> CurrentNumber;
			ColMinNumber = std::min(CurrentNumber, ColMinNumber);
		}
		RowMaxNumber = std::max(RowMaxNumber, ColMinNumber);
	}
	std::cout << "Solve : " <<  RowMaxNumber;
	return 0;
}