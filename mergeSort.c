#include<stdio.h>

int merge(int left[], int right[])
{

	int leftSize = sizeof(left) / sizeof(int);
	int rightSize = sizeof(right) / sizeof(int);

	int i = 0;
	int j = 0;

	int returnArr[leftSize + rightSize] = {0};
	int k = 0;
	while(i < leftSize && j < rightSize)
	{
		if(leftArr[i] < rightArr[j])
		{
			returnArr[k] = leftArr[i];
			i++;
		}else{
			returnArr[k] = rightArr[j];
			j++;
		}
		k++;
	}

	while(i < leftSize)
	{
		returnArr[k++] = leftArr[i++];
	}

	while(j < rightSize)
	{
		returnArr[k++] = rightArr[j++];
	}

	return returnArr;
}	

void mergeSort(int arr[])
{	
	int size = sizeof(arr)     /	sizeof(int);
	
	//if there is one element in array then return
	if(size == 1)
		return;
	
	//size of left arr needs to be ?
	int mid = (size / 2) - 1;

	int leftArr[mid] = {0};

	//size of right array needs to be
	int sizeRight = (size-1) - mid;
 
	int rightArr[sizeRight] = {0};


	//now split left and right
	for(int i = 0; i < mid; i++){
		leftArr[i] = arr[i];
	}

	
	//now split right arr
	for(int i = 0; i < sizeRight; i++){
		rightArr[mid + i] = arr[mid++];
	}

	leftArr = mergeSort(leftArr);
	rightArr = mergeSort(rightArr);

	merge(leftArr,rightArr);
		

}
int main()
{
	int arr [] = {2,3,5,6,32,1,1,2,34,3,4,5,6,6,7,7,8,9,4,3,2,3,2,3};
	int size = sizeof(arr) / sizeof(int);

	mergeSort(arr);	

	for(int i = 0; i < size; i++){
		printf("%d ",arr[i]);
	}

	return 0;
}
