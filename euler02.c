#include <stdio.h>
#include <stdlib.h>

//Project Euler #2
//Even Fibonacci sums
int main() {
 
  int uno = 1;
  int dos = 2;
  int sum = 0;
  int temp;
  while(dos < 4000000) {
    
    if( (dos) % 2 == 0 ) {
      sum += dos;
    }

    temp = uno;
    uno = dos;
    dos += temp;

  }
  printf( "%d\n",sum );
  return 0;
}
