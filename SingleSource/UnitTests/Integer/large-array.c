#include <stdio.h>

typedef int __attribute__ ((bitwidth(13))) int13;


int13 test(int13 x) {
  const int13 XX[1000] = { 0, 0 };
  const char S [1000] = "foo";

  const int13 array[] = {
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
     17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 17, 23, 123, 123, 49, 
   };
   return array[x];
} 

int main()
{
    if(test(1) != 23)
        printf("error\n");
    if(test(2) != 123)
        printf("error2\n");
}