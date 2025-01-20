/*
답 : http://boj.kr/1a1898996c8542889b32b4c1b2498dd0

생각
- 단순하게 26자니까 최대로 배열을 생성
- 주석 친 부분으로 소문자 알파벳이 얼만지 입력값 넣어서 확인
- 생각해보니 그냥 알파벳 시작 문자부터 끝문자까지로 조건 걸면 끝
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
  int *result = new int[26];
  string s;

  cin >> s;

  // for(char &c : s){
  //   cout << (int) c << endl;
  // }

  for(int i=0;i<s.length();i++) {
    if(s[i]>='a' && s[i]<='z') {
      result[s[i]-'a']++;
    }
  }

  for(int i=0;i<26;i++) {
    cout << result[i] << ' ';
  }

  cout << endl;
}