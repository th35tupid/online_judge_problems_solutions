#include <iostream>
using namespace std;


int main()
	{
		long long int n;
		cin >> n;
		int c=0;

		while(n)
		{
			if(n%10 == 4 || n%10 == 7)
			{
				c++;
			}
			n/=10;
		}
		
		if(c==4 || c==7)
		{
			cout << "YES" << endl;
		}	
		else
		{
			cout << "NO" << endl;
		}

	return 0;
	}
