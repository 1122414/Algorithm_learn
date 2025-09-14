#include<iostream>
#include<cmath>
#define MAXN 1000005
using namespace std;
int n, B, ans, prime[MAXN], visit[MAXN];
void oula_prime(){
  for (int i = 2; i <= MAXN; i++){
    if(!visit[i]){
      prime[++prime[0]] = i;
    }
    for (int j = 1; j <= prime[0] && i * prime[j] <= MAXN; j++){
      visit[i * prime[j]] = 1;
      if (i % prime[j] == 0){
        break;
      }
    }
  }
}
int main(){
  cin >> n >> B;
  oula_prime();
  for (int i = B + 1; i <= n;  i++){
    int temp_i = i, flag = 1;
    if(!visit[temp_i] && temp_i > B){
      flag = 0;
      continue;
    }
    for (int j = 1; j <= prime[0] && prime[j] * prime[j] <= i; j++)
    {
      while (temp_i % prime[j] == 0)
      {
        temp_i /= prime[j];
        if (prime[j] > B)
          flag = 0;
      }
    }
    if(temp_i > B)
      flag = 0;
    ans += flag;
  }
  cout << ans + B;
  return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int p[10000001];
// int main(){
// 	int n,b;
// 	cin>>n>>b;
// 	p[1]=1;
// 	for(int i=2;i<=n;i++){
// 		if(p[i]==0){
// 质数本身即为其最大公因数
// 			for(int j=i;j<=n;j+=i){
// 				p[j]=i;
// 			}
// 		}
// 	}
// 	int cnt=0;
// 	for(int i=1;i<=n;i++){
// 		if(p[i]<=b)cnt++;
// 	}
// 	cout<<cnt;
// 	return 0;
// }