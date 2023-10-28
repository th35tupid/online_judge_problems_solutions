#include <iostream>
using namespace std;


int main()
	{
		int n, i, j;
		cin >> n;
		int a, b;
		cin >> a;
		int arr1[a];
		for(i=0; i<a; i++)
			{
				cin >> arr1[i];
			}

		cin >> b;
		int arr2[b];
		
		for(i=0; i<b; i++)
			{
				cin >> arr2[i];
			}
		
		int arr3[n+1];

		for(i=0; i < n+1; i++)
			{
				arr3[i] = 0;
				for(j=0; j < a; j++)
					{
						arr3[arr1[j]]=1;
					}

				for(j=0; j < b; j++)
					{
						arr3[arr2[j]]=1;
					}
			}	
		
		int c=0;
			
		for(i=0; i < n+1; i++)
			{
				c+=arr3[i];
			}
		if(c==n)
			{
				cout << "I become the guy." << endl;
			}
		else
			{
				cout << "Oh, my keyboard!" << endl;
			}

	return 0;
	}
