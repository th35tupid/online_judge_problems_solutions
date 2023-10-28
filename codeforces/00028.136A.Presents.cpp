#include <iostream>
using namespace std;


int main()
	{
		int n;
		cin >> n;
		int arr1[n], arr2[n];
		int i;
		for(i=0; i< n; i++)
			{
				cin >> arr1[i];
				arr2[arr1[i]-1] = i+1;
			}

		for(i=0; i< n; i++)
			{
				if(i==0)
					{
						cout << arr2[i];
					}
				else
					{
						cout << " " << arr2[i];
					}
			}
	
		cout << endl;
		
		return 0;
	}
