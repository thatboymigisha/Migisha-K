#include <stdio.h>

int main() {
 int numb;
 printf("Enter a number: ");
 scanf("%d",&numb);

 if(numb % 2 == 0){
        printf("it is even\n");
 }else{
     printf("it is odd\n");
 }
    return 0;

}
