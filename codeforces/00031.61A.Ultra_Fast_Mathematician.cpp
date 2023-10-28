#include <iostream>
#include <cstring>
using namespace std;


int main()
	{
		char str1[101], str2[101], str3[101];
		cin >> str1 >> str2;
		int n=strlen(str1);
		int i;
		for(i=0; i < n; i++)
			{
				if(str1[i]==str2[i])
					str3[i]='0';
				else
					str3[i]='1';
			}
			
		for(i=0; i < n; i++)
			{	
				cout << str3[i];
			}
			
				cout << endl;
			


	return 0;
	}
