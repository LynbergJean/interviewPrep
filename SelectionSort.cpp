#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;


void SelectionSort(vector<int>& arr)
{
	if(arr.size() <= 1)
		return;

	for(int i = 0; i < arr.size(); i++)
	{
		int MinIndex = i;
			
		for(int j = i + 1; j < arr.size(); j++)
		{
			if(arr[j] < arr[MinIndex])
				MinIndex = j;
		}

		swap(arr[MinIndex],arr[i]);
	}

}

int main()
{
	vector<int> s = {9,4,65,7,6,3,2,5,7,85,2,2,44,67,7};

	for(int i : s)
	{
		cout << i << " ";
	}
	
	
	cout << endl;


	SelectionSort(s);
		

	for(int k : s)
	{
		cout << k << " ";
	}
	
	return 0;
	
}
		
