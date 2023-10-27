#include <iostream>
using namespace std;


int main()
	{
		int n;
		cin >> n;
		int comengo[n*2];
		int people[n*2-1];
		int i, j;
		int max=0;
		int c=0;
		for(i=0; i<n*2; i++)
		{
			cin >> comengo[i];
			if(i%2==0)
				c-=comengo[i];
			else
				c+=comengo[i];
			if(max < c)
				max=c;
		}
		cout << max << endl;


	return 0;
	}
