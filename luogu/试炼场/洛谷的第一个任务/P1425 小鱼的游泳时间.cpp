#include<iostream>
#define ll long long int
using namespace std;
int main(){
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  ll last_min = (c * 60 + d) - (a * 60 + b);
  cout << last_min/60 << " " << last_min%60;
  return 0;
}