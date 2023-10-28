#include <iostream>
using namespace std;


int main()
	{
		int n;
		cin >> n;
		int arr[n][2];
		int i, j;
		int c=0;
		for(i=0; i<n; i++)
			{
					cin >> arr[i][0] >> arr[i][1];
					if(arr[i][1]-arr[i][0]>1)
						c++;	
			}
		cout << c << endl;





	return 0;
	}
