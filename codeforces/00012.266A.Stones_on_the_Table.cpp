#include <iostream>
#include <string>
using namespace std;
int main()
	{
		int n;
		int i, j;
		cin >> n;
		string str;
		cin >> str;
		/*for(i=0; i< n; i++)
			{
				cin >> str[i];
			}
		*/
		int c=0;

		for(i=0, j=1; i<n-1, j<n; i++, j++)
			{				
				if(str[i]==str[j])
					c++;
			}
		cout << c << endl;

	return 0;
}
