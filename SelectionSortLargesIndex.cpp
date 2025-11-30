#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void SelectionSort(vector<int>& arr)
{
	if(arr.size() == 1)
		return;

	int size = arr.size();
	
	for(int i = size - 1; i > 0; i--)
	{
		int LargestIndex = 0;
		for(int j = 1; j <= i; j++)
		{
			if(arr[j] > arr[LargestIndex])
			{
				LargestIndex = j;
			}
		}
		swap(arr[LargestIndex], arr[i]);
	}
	

}


int main() 
{
	vector<int> s = {1,4,5,8,1,2,2,3,45,32,2,11,2,3,2,23,4,5,6};
	SelectionSort(s);
		
	for(int i : s)
	{
		cout << i << " ";
	}
	 
	cout << endl;

	return 0;

}
