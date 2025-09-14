#include<iostream>
#define N 10
using namespace std;
int a[10] = {1, 15, 8, 3, 5, 4, 9, 99, 9, 2};
// 选择
void select_sort(){
  for (int i = 0; i < N; i++){
    int minn_index = i;
    for (int j = i; j < N; j++){
      a[j] < a[minn_index] ? minn_index = j : minn_index = minn_index;
  }
    swap(a[i], a[minn_index]);
  }
}

// 冒泡
void bubble_sort(){
  for (int i = 0; i < N - 1; i++){
    for (int j = 0; j < N - i - 1; j++){
      if(a[j]>a[j+1]){
        swap(a[j], a[j + 1]);
      }
    }
  }
}

// 插入
void insertion_sort(){
  for (int i = 1;i<N;i++){
    int key = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > key){
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = key;
  }
}

// 快排
// 思想：左右哨兵
void quickSort(int arr[], int left, int right) {
    if (left >= right) return; // 递归结束条件
    
    int i = left, j = right;
    int pivot = arr[left]; // 选择第一个元素为基准
    
    while (i < j) {
        // 从右往左找到比 pivot 小的元素
        while (i < j && arr[j] >= pivot) j--;
        if (i < j) arr[i++] = arr[j];
        
        // 从左往右找到比 pivot 大的元素
        while (i < j && arr[i] <= pivot) i++;
        if (i < j) arr[j--] = arr[i];
    }
    
    arr[i] = pivot; // 将基准放回正确位置
    
    // 递归排序左右两边
    quickSort(arr, left, i - 1);
    quickSort(arr, i + 1, right);
}
int main(){
  // select_sort();
  quickSort(a, 0, N - 1);
  for (int i = 0; i < N;i++){
    cout << a[i] <<' ';
  }
  return 0;
}


// // select
// for (int i = 0;i<n;i++){
//   int maxn_index = i;
//   for (int j = i; j < n; j++)
//   {
//     a[maxn_index] < a[j] ? maxn_index = j : maxn_index = maxn_index;
//   }
//   swap(a[i],a[maxn_index])
// }

// // bubble
// for (int i = 0;i<n-1;i++){
//   for (int j = 0;j<n-i-1;j++){
//     if(a[j]>a[j+1]){
//       swap(a[j], a[j + 1]);
//     }
//   }
// }

// // insert
// for (int i = 1;i<n;i++){
//   int key = a[i];
//   int j = i - 1;
//   while(j>=0&&key>a[j]){
//     a[j + 1] = a[j]
//     j--;
//   }
//   a[j] = key;
// }