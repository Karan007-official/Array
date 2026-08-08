#include<iostream>
#include<math.h>
using namespace std;

void fun(int arr[],int n){
  for(int i=0;i<n   ;i++)
  cout<<arr[i]<<" ";
}


int main(){
  int arr[5]={1,2,3,45,6};

  fun(arr,5);
}


}