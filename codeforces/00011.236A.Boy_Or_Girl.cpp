#include <iostream>
#include <string>
using namespace std;
int main()
	{
		string str;
		cin >> str;
		int alphabets[26];
		int i;
		int j=0;
		for(i=0; i<26; i++)
			alphabets[i]=0;
		int size=str.length();
		for(i=0; i < size; i++)
			{
				alphabets[((int)(str[i]-97))]=1;		
			}
		int c=0;
		for(i=0; i< 26; i++)
			{
				c+=alphabets[i];
			}
		if(c%2==0)
			{
				cout << "CHAT WITH HER!";
			}
		else
			{
				cout << "IGNORE HIM!";		
			}	
		cout << endl;
return 0;
}
