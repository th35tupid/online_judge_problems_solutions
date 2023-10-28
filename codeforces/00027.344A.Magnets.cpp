#include <iostream>
#include <string>
using namespace std;


int main()
	{

		int n;
		cin >> n;
		int i;
		string str;
		int c=1;
		char temp;

		for(i=0; i < n; i++)
			{	
				if(i==0)
					{
						cin >> str;
						temp = str[0];
					}
				else
					{
						cin >> str;
						if(temp!=str[0])
							{
								c++;
							}
						temp=str[0];
					}
			} 

		cout << c << endl;



	return 0;
	}
