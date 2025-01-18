/*
답 : http://boj.kr/c7b230ec84bf4153a125b858a5ef77e2
*/
/**
 *  생각
 *  - 단순하게 복사본을 만들어서 뒤집고 비교 !
 */
#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin>>s;

  string s1(s);
  reverse(s1.begin(),s1.end());

  int result = s.compare(s1) != 0 ? 0 : 1;
  cout << result  << '\n';

  return 0;
}