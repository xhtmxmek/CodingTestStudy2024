/*
* 순열은 순서에 상관있게 세울때
* ex: 1,2,3과 1,3,2는 다른 것이다.
* 문제에서
* 순서를 재배치하여
* 또는 ~한 순서의 경우 max 값을 -> 무조건 순열.
* 
* 
* 조합은 순서에 상관없음. 1,2,3과 1,3,2 같은것임.
*/

//조합은 4개이상 뽑을때는 재귀함수, 그 이하는 for문 추천


#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

//int arr[] = { 1, 2, 3 };
vector<int> intArray = { 2, 1, 3, 5, 7 };
//arr에서 2개를 뽑을 경우
int n = 5;
int k = 3;
void permutation()
{
	//순열은 무조건 정렬된 상태에서 돌려야 한다.
	sort(intArray.begin(), intArray.end());
	do
	{
		//k개를 뽑을경우
		
		for (int i = 0; i < k; i++)
		{
			cout << intArray[i];
		}

		//for (int element : arr)
		for (int element : intArray)
		{
			cout << element << "\n";
		}

	} while (next_permutation(intArray.begin(), intArray.end()));
	//while (next_permutation(&arr[0], &arr[0] + 3));
}

void printVector(const vector<int>& _in)
{
	for (auto element : _in)
	{
		cout << element << " ";
	}
	cout << "\n";
}

void combie(int pivot, vector<int> selectedIndexes)
{
	if (selectedIndexes.size() == k)
	{
		printVector(selectedIndexes);
		return;
	}

	//n = intarraySize
	//초기에 seletedIndex reserve되어있어야함.
	for (int i = pivot + 1; i < n; i++)
	{
		selectedIndexes.push_back(i);
		combie(i, selectedIndexes);
		selectedIndexes.pop_back();
	}
}

void combieLoop()
{
	//k가 2면 2중루프, 3이면 3중루프
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

int main()
{
	//vector<int> selecedList;
	//combie(-1, selecedList);
	combieLoop();
	return 0;
}


