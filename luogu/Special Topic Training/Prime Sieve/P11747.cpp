#include<iostream>
#include<cmath>
#define ll long long int
#define MAXN 1000005
using namespace std;
int t, num, ans, choice;
ll prime[MAXN], visit[MAXN];
void oula_prime(){
  for (int i= 2;i<=MAXN;i++){
    if(!visit[i]){
      prime[++prime[0]] = i;
    }
    for (int j = 1; j <= prime[0] && i * prime[j] <= MAXN; j++){
      visit[i * prime[j]] = 1;
      if (i % prime[j] == 0)
      {
        break;
      }
    }
  }
}
int main(){
  oula_prime();
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> t;

  while(t--){
    cin >> choice >> num;
    if(choice == 1){
      ans = 0;
      // 注意这样写
      for (int i = 1; i <= prime[0] && prime[i] * prime[i] <= num; i++){
        while (num % prime[i] == 0){
          num /= prime[i];
          ans++;
        }
      }
      if(num > 1)
        ans++;
      cout << max(0, ans - 1) << endl;
    }else{
      unsigned long long p = 1;
			for(int i = 1;i <= num+1;i++)
        p *= 2;
      cout << p << endl;
    }
  }
  return 0;
}