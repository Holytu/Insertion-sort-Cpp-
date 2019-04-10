#include<iostream>
#include<array>
using namespace std;
int main()
{
	int arr[]={14,63,56,73,62,99,23,2,4,54};
	int length = sizeof(arr) / sizeof(int);
	for(int i = 0 ; i < length - 1 ; i++ )
	{
		for (int j = 0 ; j < length - i - 1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	for (int i = 0; i < length; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}