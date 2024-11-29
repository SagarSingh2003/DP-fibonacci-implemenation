#include<stdio.h>

//TC = N SC = 1
// memoization
//tabulation
//final optimize

int fib(int final){
    
  int prev2 = 0;
  int prev1 = 1;
  
  for(int i = 2; i < final ; i++){
      int temp = prev1;
      prev1 = prev2 + prev1;
      prev2 = temp; 
  }
  
  return prev1 + prev2;
    

}

int main(){
  
  
  
  printf("%d" , fib(7));
  
  
  return 0;
  
}
