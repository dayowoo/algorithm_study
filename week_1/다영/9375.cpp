/*
답 : http://boj.kr/2c284c870fb64ae8adb0a5760111c03d
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    string a, b;
    cin >> n;
    
    while(n--) {
    	cin >> m;
    	
    	map<string, int> mp;
    	for(int i=0; i<m; i++) {
    		cin >> a >> b;
    		mp[b] ++;
		}
		long long ret=1;
		for(auto c: mp) {
			ret *= ((long long)c.second +1);
		}
		ret--;
		cout << ret;
	}
    return 0;
}


