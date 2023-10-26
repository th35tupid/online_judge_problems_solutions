#include <iostream>
#include <string>
using namespace std;


int main()
	{
		string str1, str2;
		int i;
		int checktruth=1;
		cin >> str1 >> str2;
		int size=str1.length();
		for(i=0; i< size; i++)
		{
			if(str1[i]!=str2[size-i-1])
			{
				checktruth=0;
				break;
			}
					
		}
		if(checktruth)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}


	return 0;
	}
