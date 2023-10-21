#include <iostream>
#include <ctype.h>
#include <cstring>
#include <string>
using namespace std;
string toLowerString(string str)
	{
		int size=str.length();
		int i=0; 
		for(i=0; i< size; i++)
			{
				str[i]=tolower(str[i]);
			}
		return str;
	}
int main()
	{
		string str1, str2;
		cin >> str1;
		cin >> str2;
		str1=toLowerString(str1);
		str2=toLowerString(str2);
		int s=str1.compare(str2);
		cout << s << endl;
		return 0;
	}
