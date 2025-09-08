#include<iostream>
using namespace std;
int x, n, sum;
int main() {
  cin >> x >> n;
  sum += n / 7 * 1250;
  for (int i = x; i < x + n % 7; i++){
    if(i%6!=0 && i%7!=0){
      sum += 250;
    }
  }
  cout << sum;
  return 0;
}

// #include<iostream>
// using namespace std;
// int x, n, j, sum;
// int main()
// {
// 	cin >> x >> n;
// 	j = x;
// 	for (int i = x; i <= n + x - 1; i++, j++)
// 	{
// 		if (j % 6 != 0 && j % 7 != 0)
// 			sum += 250;
// 		if (j % 7 == 0)
// 			j -= 7;
// 	}
// 	cout << sum;
// 	return 0;
// }