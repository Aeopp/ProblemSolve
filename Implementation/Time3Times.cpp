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
	int32_t Target = 0;
	std::cin >> Target;

	int32_t Count{ 0 };
	
	for (int32_t Hour = 0; Hour < (Target + 1); ++Hour)
	{
		for (int32_t Min = 0; Min < 60; ++Min)
		{
			for (int32_t Sec = 0; Sec < 60; ++Sec)
			{
				static auto Is3Times = [](const int32_t Number)
				{
					int32_t ModulateN = Number / 10;
					if (Number == 0)
					{
						return false;
					}
					if (ModulateN == 3 && ModulateN !=0)
					{
						return true;
					}
					if ((Number % 10) != 0)
					{
						if ((Number % 10) % 3 == 0)
						{
							return true; 
						}
					}

					return false;
				};
				const std::string Time = std::to_string(Sec) + std::to_string(Min) + std::to_string(Hour);
				auto iter = std::find_if(std::begin(Time), std::end(Time), [](
					const auto element
					) {return element == '3'; });
				if (std::end(Time) != iter)
				{
					++Count; 
				}

			}
		}
	}

	std::cout << Count << std::endl;

};

int main()
{
	main_impl();
}