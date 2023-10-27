#include <iostream>
#include <string>
using namespace std;


int main()
	{
		int a, b, i, j, k;
		cin >> a >> b;
		string str;

		cin >> str;

		for(j=0; j < b; j++)
			{	
				for(i=0; i < a-1; i++)
				{
					if(str[i] == 'B' && str[i+1] == 'G')
						{
							str[i] = 'G';
							str[i+1] = 'B';
							i++;
						}
				}
			}
		cout << str << endl;
		
return 0;
	}
