#include <iostream>
#include <string>
using namespace std;
int main()
	{
		string str;
		cin >> str;
		int size= str.length();
		int i;
		int a=0;
		int b=0; 
		for(i=0; i<size; i++)
		{
			if(str[i]<97)
				a++;
			else
				b++;
		}			
		int c=(a>b)?0:1;
		if(!c)
		{
			for(i=0; i< size; i++)
			{	
				str[i]=toupper(str[i]);
				cout << str[i];
			}
		}
		else
		{
			for(i=0; i< size; i++)
            {              
				str[i]=tolower(str[i]);                 		  
				cout << str[i];                        		  
            }                               		
        }
		cout << endl;

		return 0;       		
	}
