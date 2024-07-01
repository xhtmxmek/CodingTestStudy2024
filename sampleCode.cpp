/*
* ������ ������ ����ְ� ���ﶧ
* ex: 1,2,3�� 1,3,2�� �ٸ� ���̴�.
* ��������
* ������ ���ġ�Ͽ�
* �Ǵ� ~�� ������ ��� max ���� -> ������ ����.
* 
* 
* ������ ������ �������. 1,2,3�� 1,3,2 ��������.
*/

//������ 4���̻� �������� ����Լ�, �� ���ϴ� for�� ��õ


#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

//int arr[] = { 1, 2, 3 };
vector<int> intArray = { 2, 1, 3, 5, 7 };
//arr���� 2���� ���� ���
int n = 5;
int k = 3;
void permutation()
{
	//������ ������ ���ĵ� ���¿��� ������ �Ѵ�.
	sort(intArray.begin(), intArray.end());
	do
	{
		//k���� �������
		
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
	//�ʱ⿡ seletedIndex reserve�Ǿ��־����.
	for (int i = pivot + 1; i < n; i++)
	{
		selectedIndexes.push_back(i);
		combie(i, selectedIndexes);
		selectedIndexes.pop_back();
	}
}

void combieLoop()
{
	//k�� 2�� 2�߷���, 3�̸� 3�߷���
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


