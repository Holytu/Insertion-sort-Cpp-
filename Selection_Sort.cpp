#include<iostream>
#include<array>
using namespace std;
int main()
{
	//int arr[]={14,63,56,73,62,99,23,2,4,54};
	int arr[]={10,9,8,7,6,5};
	int length = sizeof(arr) / sizeof(int);
	int x, tmp, pos;

	for(int i = 0 ; i < length ; i++ )
	{
		pos = i;
		for (int j = i+1; j < length; j++)
		{
			if(arr[i] > arr[j])
			{
				//x = arr[j];
				pos = j;
				//cout<<"pos = "<<pos<<", i = "<<i<<", ";
				//cout<<"x = "<<x<<endl;
			}
		}
		if(i != pos)
		{
			tmp = arr[i];
			arr[i] = arr[pos];
			arr[pos] = tmp;
		}
	}
	for (int i = 0; i < length; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}