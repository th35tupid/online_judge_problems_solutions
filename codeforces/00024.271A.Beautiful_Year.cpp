#include <iostream>
using namespace std;


int main()
	{
		int arr1[4];
		int i;
		int n;
		int year;
		cin >> year;
		
		while(++year)
			{
				n=year;
				i=3;
				while(n)
				{
					arr1[i]=n%10;
					n/=10;
					i--;
				}

		if(arr1[0]!=arr1[1] && arr1[0] != arr1[2] && arr1[0] != arr1[3])
			{
				if(arr1[1]!=arr1[2] && arr1[1] != arr1[3])
					{
						if(arr1[2] != arr1[3])
							{
								cout << year << endl;
								break;
							}	
					}
			}
			
		}
	return 0;
	}
