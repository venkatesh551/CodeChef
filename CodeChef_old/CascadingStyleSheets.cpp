#include <iostream>
#include <map>

using namespace std;
typedef pair<int, int> pii;
int main(void)
{
	int n, m;
	cin >> n >> m;
	map<pii, pii> ht;
	for (int i = 0; i < n; ++i)
	{
		int id, attr, val, priority;
		
		cin >> id >> attr >> val >> priority;
		pii key = make_pair(id, attr);
		pii value = make_pair(val, priority);
		if (ht.count(key) > 0 && priority >= ht[key].second)
		{
			ht[key] = value;
			//cout << "first " << ht[key].second << endl;
		}
		else if (ht.count(key) == 0)
		{
			ht[key] = value;
			//cout << "second" << endl;
		}
		
	}
	//cout << ht.size() << endl;
	for (int i = 0; i < m; ++i)	
	{
		int id, attr;
		cin >> id >> attr;
		pii key = make_pair(id, attr);	
		cout << ht[key].first << endl;
	}

	return 0;
}
