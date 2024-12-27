#include <algorithm>
#include <vector>
#include <iostream>
#include "permutation_combine_base.h"

using namespace std;

//int arr[] = { 1, 2, 3 };
vector<int> intArray = { 2, 1, 3, 5, 7 };
int n = 5;
int k = 3;
void permutation()
{
	sort(intArray.begin(), intArray.end());
	do
	{		
		////if choose two element..
		//for (int i = 0; i < 2; i++)
		//{
		//	cout << intArray[i];
		//}

		for (int element : intArray)
		{
			cout << element << "\n";
		}

	} while (next_permutation(intArray.begin(), intArray.end()));
}

void printVector(const vector<int>& _in)
{
	for (auto element : _in)
	{
		cout << element << " ";
	}
	cout << "\n";
}

//pick k out of n
void combie(int pivot, vector<int> selectedIndexes)
{
	if (selectedIndexes.size() == k)
	{
		printVector(selectedIndexes);
		return;
	}

	for (int i = pivot + 1; i < n; i++)
	{
		selectedIndexes.push_back(i);
		combie(i, selectedIndexes);
		selectedIndexes.pop_back();
	}
}

//If k is 3, it is a 3 - nested loop, and if it is 2, it is a 2 - nested loop.
void combieLoop()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			for (int k = 0; k < j; k++)
			{
				cout << i << " : " << j << " : " << k << "\n";
			}
		}
	}
}

//int main()
//{
//	//vector<int> selecedList;
//	//combie(-1, selecedList);
//	permutation();
//	return 0;
//}


