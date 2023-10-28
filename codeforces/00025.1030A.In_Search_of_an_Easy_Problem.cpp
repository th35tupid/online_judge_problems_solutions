#include <iostream>
using namespace std;


int main()
	{
		int i, n;
		int c=0;
		cin  >> n;
		int arr[n];
		for(i=0; i< n; i++)
			{
				cin >> arr[i];
				if(arr[i])
					c=1;
			}
		if(c)
			cout << "HARD" << endl;
		else
			cout << "EASY" << endl;




	return 0;
	}
