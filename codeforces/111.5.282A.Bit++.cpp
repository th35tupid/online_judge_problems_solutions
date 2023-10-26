#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i;
	int c=0;
	for(i=0; i<n; i++)
	{
		string str;
		cin >> str;
		if(str[0]=='+'|| str[1]=='+')
			{
				c++;
			}
		else
		{
			c--;
		}
	}
	cout << c << endl;
	
	return 0;
}

