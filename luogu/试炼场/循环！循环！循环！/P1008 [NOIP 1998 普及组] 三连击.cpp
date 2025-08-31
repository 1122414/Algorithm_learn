#include<iostream>
#include<set>
using namespace std;
set<int> s;
void is_true(int i){
  while(i){
    if (i % 10 != 0){
      s.insert(i % 10);
    }
    i /= 10;
  }
}
int main(){
  for (int i = 123;i <= 333;i++){
    int j = i * 2,k = i * 3;
    if(i%10==0||j%10==0||k%10==0)
      continue;
    s.clear();
    is_true(i);
    is_true(j);
    is_true(k);
    if(s.size()==9){
      cout<<i<<" "<<j<<" "<<k <<endl;
    }
  }
  return 0;
}


// #include<iostream>
// using namespace std;
// int i, a[5], b[5], c[5];
// int main()
// {
// 	for (i = 123; i <= 333; i++)
// 	{
// 		a[0] = i / 100;
// 		a[1] = i / 10 % 10;
// 		a[2] = i % 10;
// 		b[0] = 2 * i / 100;
// 		b[1] = 2 * i / 10 % 10;
// 		b[2] = 2 * i % 10;
// 		c[0] = 3 * i / 100;
// 		c[1] = 3 * i / 10 % 10;
// 		c[2] = 3 * i % 10;
// 		if (a[1] * a[2] * a[0] * b[1] * b[2] * b[0] * c[1] * c[2] * c[0] == 362880 && a[1] + a[2] + a[0] + b[1] + b[2] + b[0] + c[1] + c[2] + c[0] == 45)
// 			cout << i << " " << i * 2 << " " << i * 3 << endl;
// 	}
// 	return 0;
// }