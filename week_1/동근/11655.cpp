/*
답 : http://boj.kr/a7e74bfb990641249d917c73a9246796
*/
/**
 * 생각
 * - 대소문자 구별하고
 * - 13씩 더해서 알파벳 범위가 초과해버리면, 원점으로 돌게끔 % 연산자 활용
 * - 주의점은 더 할 때, char 자료형 특성 상 오버플로우 일어나기가 쉬우므로 반드시 더하고 빼는 순서에 유의
 */
#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;

  getline(cin, s);

  for(int i=0;i<s.length();i++){
    char a = s[i];

    if (isalpha(a) && islower(a)) {
      a = (a - 'a' + 13) % 26 + 'a';
    } else if (isalpha(a) && isupper(a)) {
      a = (a - 'A' + 13) % 26 + 'A';
    }

    s[i] = a;
  }
  cout<<s;

  return 0;
}