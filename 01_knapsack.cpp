#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int val[], int w, int n){
    //base condition
    //for base condition think of the samallest alid input 
      
      if(n==0 || w==0){
          return 0;
      }
   //knapsack
    //choice diagram
    if(wt[n-1]<=w){
        return max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1)
                ,knapsack(wt,val,w,n-1));
    }
    else if(wt[n-1]>w){
        return knapsack(wt,val,w,n-1);
    }
     

}




int main(){
    int n=3;
  int wt[]={10,20,30};
  int val[]={60,100,120};
  int w=50;
  cout<<knapsack(wt,val,w,n);
  return 0;
}


//in Recursion

// do input small for every time

// for example 
// fib(n)
//  | 
// fib(n-1)
// |
// fib(n-2)