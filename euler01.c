#include <stdio.h>
#include <stdlib.h>

//Project Euler #1
//Mults of 3 & 5
int main() {
  
  int x = 999;
  int sum = 0;
  while(x) {
    if( x % 3 == 0 || x % 5 == 0 ) {
      sum += x;
    }
    x--;
  }
  printf( "Sum = %d\n",sum );
  return 0;
}
