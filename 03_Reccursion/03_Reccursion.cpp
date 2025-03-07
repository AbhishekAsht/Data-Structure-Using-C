#include<iostream>
using namespace std;

//void print_1_to_10_Number(int number)
//{
//	if (number == 10)
//		return;
//	cout << number << " ";
//	return print_1_to_10_Number(number + 1);
//}

int binarysearch(int* arr, int start, int end, int key)
{

	if (start <= end)
	{
		int mid = end + (start - end) / 2;

		if (arr[mid] == key)
			return mid;
		else if (arr[mid] > key)
			return binarysearch(arr, mid - 1, end, key);
		else
			return binarysearch(arr, start, mid + 1, key);
	}
	return -1;
	
}

int main()
{
	//************** first program **********************
	/*int num = 0;
	print_1_to_10_Number(num);*/

	//************** second program **********************

	int size = 0;
	int key,start, end;
	cout << "Enter a Array Size: ";
	cin >> size;
	int* arr = new int[size];

	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++)
	{
		arr[i] = i * 2;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	start = 0;
	end = n - 1;

	cout << "Enter key: ";
	cin >> key;

	cout << binarysearch(arr,start,end,key);
	
	return 0;
}