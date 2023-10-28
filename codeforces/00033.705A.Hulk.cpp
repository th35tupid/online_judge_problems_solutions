#include <iostream>
using namespace std;


int main()
	{
		int n;
		cin >> n;
		int i;
		for(i=0 ; i < n; i++)
			{
				if(n==1)
					{		
						cout << "I hate ";
						break;
					}
				else
					{
						if(i%2 == 0)
							cout << "I hate ";
						else
							cout << "I love ";
						if(i==n-1)
							break;
						else
							cout << "that ";
					}
			}
		cout << "it" << endl;





	return 0;
	}
