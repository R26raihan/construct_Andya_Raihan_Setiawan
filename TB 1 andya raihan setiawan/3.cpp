#include <iostream>
using namespace std;

int main(){
	int a[7]={1,23,4,5,6,78,89};
	int palingbesar=0;

	for (int i = 0; i < 7; i++)
	{
		if (a[i]>palingbesar)
		{
			palingbesar=a[i];
		}
		
	}
	cout<<palingbesar;
}