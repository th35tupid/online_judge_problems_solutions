#include <iostream>
using namespace std;


int main()
	{
		int a, b;
		cin >> a >> b;
		int arr[a];
		int i; 
		int c=0;
		for(i=0; i < a; i++)
		{
			cin >> arr[i];
			if(arr[i] > b)
				c+=2;
			else
				c++;
		}
		
		cout << c << endl;





	return 0;
	}
