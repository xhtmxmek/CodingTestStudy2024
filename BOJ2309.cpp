#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;
void printSevendwarf()
{
	vector<int> HeightList;
	HeightList.reserve(9);
	HeightList.resize(9);

	for (int i = 0; i < HeightList.size(); i++)
	{
		int height = 0;
		std::cin >> height;
		HeightList[i] = height;
	}

	do
	{
		
	} while (next_permutation(HeightList.begin(), HeightList.end()));
}