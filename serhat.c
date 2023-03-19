#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
  


 int main(){
      
   int *ad1,*ad2,*ad;
   int n=10,p=20;

    ad1=&n;
    ad2=&p;

    printf("Atamadan once ad1 degeri:%d\n",*ad1);
     printf("Eski a1 degerinin adresi:%d\n",ad1);
     *ad1=*ad2+2;
     printf("Atamadan sonra a1 degeri:%d\n",*ad1);
     printf("yeni a1 degerinin adresi:%d",ad1);







    return 0; 
  }


