#include <iostream>

using namespace std;

int main()
{
	int T;
	
	cin >> T;
	
	while (T--)
	{
		int n;
		
		cin >> n;
		
		int f_min, s_min;
		f_min = s_min = 1e9;
		
		for (int i = 0; i < n; ++i)
		{
			int x;
			
			cin >> x;
			if (x < f_min)
			{
				s_min = f_min;
				f_min = x;
			}
			else if (x < s_min)
			{
				s_min = x;
			}		
		}
		cout << f_min + s_min << endl;
	}
	return 0;
}
