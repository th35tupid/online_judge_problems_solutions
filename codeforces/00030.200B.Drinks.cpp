#include <iostream>
using namespace std;


int main()
	{
		long double percentage;
		long double sum=0;
		int n;
		cin >> n;
		long double arr[n];
		int i;
		for(i=0; i< n; i++)
			{
				cin >> arr[i];
				sum+=arr[i];
			}
		cout << (sum)/n << endl;





	return 0;
	}
