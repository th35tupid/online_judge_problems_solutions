#include <iostream>
using namespace std;


int main()
	{
		int t;
		cin >> t;
		long long int a, b;
		int i;
		for(i=0; i<t; i++)
			{
				cin >> a >> b;
				if(a%b==0)
					cout << 0 << endl;
				else
					cout << b-(a%b) << endl;
			}

		return 0;
	}
