#include<stdio.h>
#include<iostream>

using namespace std;
int main()
{
	int arrInt[5]={8,2,5,7,4};
	int j,x,tmp;
	for(int i = 0; i < 5; i++)
	{
		x = arrInt[i];
		j = i-1;
		while(arrInt[j]>x && j>=0)
		{
			arrInt[j+1] = arrInt[j];
			j--;
		}
		arrInt[j+1] = x;
	}

	for (int i = 0; i < 5; ++i)
	{
		/* code */
		cout<<arrInt[i]<<" ";
	}
	cout<<endl;
}