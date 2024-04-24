#include <bits/stdc++.h>

using namespace std;

struct comp {
	bool operator()(const pair<int, int> &p1,const pair<int, int> &p2)
	{
        if(p1.second == p2.second)
		    return p1.first <= p2.first;
        
		    return p1.second >= p2.second;
	}
};

int main()
{
	set<pair<int, int>, comp> s;

	s.insert({ 4, 3 });
	s.insert({ 5, 2 });
	s.insert({ 4, 2 });
	s.insert({ 5, 4 });
	s.insert({ 5, 8 });
	s.insert({ 7, 3 });

    for(auto &q : s){
        cout << q.first << " " << q.second << endl;
    }
	// for (auto i = s.begin(); i != s.end(); i++) {
	// 	cout << i->first << " " << i->second << endl;
	// }

	return 0;
}
