#include<iostream>
#define MAXN 10000005
#define ll long long int
#define ull unsigned long long int
using namespace std;
ll n, ans = 1, prime_num;
int main(){
  cin >> n;
  for (ll i = 2; i * i <= n; i++){
    prime_num = 0;
    while(n % i == 0) {
      prime_num++;
      n /= i;
    }
    if(prime_num % 2 != 0){
      ans *= i;
    }
  }
  if (n != 1){
    ans *= n;
  }
  cout << ans;
  return 0;
}