#include <iostream>
using namespace std;


int main()
	{
		int n;
		cin >> n;
		string str;
		cin >> str;
		int i;
		int a=0;
		int b=0;
		for(i=0; i<n; i++)
		{
			if(str[i]=='A')
				a++;
			else
				b++;
		}
		
		if(a>b)
			cout << "Anton" << endl;
		else if(b>a)
			cout << "Danik" << endl;
		else
			cout << "Friendship" << endl;

	return 0;
	}
