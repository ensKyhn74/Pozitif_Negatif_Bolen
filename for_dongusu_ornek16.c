#include <stdio.h>
// klavyeden girilen sayının pozitif ve negatif bölenlerini ekrana yazdır

int main() 

{
 
 int x;
 int i;
  
 printf("sayi girin: ");
 scanf("%d",&x);
 
 for(i = 1 ; i <= x ; i++)
 {
    if(x % i == 0)
     {
      printf("%d\n",i);
      printf("-%d\n",i);
     }
 }
 
 return 0;

}