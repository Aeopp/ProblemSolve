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
// 00 00 00 ~ N 59 59
void main_impl()
{
	// a ~ h 
	// 1 ~ 8;
	std::string Input{};
	std::getline(std::cin, Input);
	Input[0] -= 96;
	Input[1] -= 48;
	const int32_t Col = Input[0];
	const int32_t Row = Input[1];

	int32_t Count{ 0 };

	static auto IsMove = [](const int32_t CurRow, const int32_t CurCol)
	{
		if (CurRow == std::clamp(CurRow, 1, 8) &&
			CurCol == std::clamp(CurCol, 1, 8))
		{
			return true;
		}

		return false;
	};

	// URR
	if (IsMove(Row - 1, Col + 2))
	{
		++Count;

	}
	// ULL
	if (IsMove(Row - 1, Col - 2))
	{
		++Count;

	}
	// DRR
	if (IsMove(Row + 1, Col  + 2))
	{
		++Count;

	}
	// DLL

	if (IsMove(Row + 1, Col - 2))
	{
		++Count;

	}
	// RUU
	if (IsMove(Row -2 , Col + 1))
	{
		++Count;

	}
	// RDD
	if (IsMove(Row + 2, Col + 1))
	{
		++Count;

	}
	// LUU
	if (IsMove(Row - 2, Col - 1))
	{
		++Count;

	}
	// LDD
	if (IsMove(Row + 2, Col  - 1))
	{
		++Count;

	}
	std::cout << Count;
};

int main()
{
	main_impl();
}