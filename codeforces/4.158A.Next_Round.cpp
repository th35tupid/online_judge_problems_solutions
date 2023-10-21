#include <iostream>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	int t=arr[k-1];
	int c=0;
	for(i=0; i<n; i++)
		{
		   if(t<=arr[i] && arr[i]>0)
		   {
				c++;
		   }
		}
	cout << c << endl;
	return 0;
}

