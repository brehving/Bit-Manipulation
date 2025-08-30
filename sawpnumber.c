#include<stdio.h>
int main(){
    int a,b;   
    
    scanf("%d" "%d",&a,&b);
    printf("the numbers %d and %d\n",a,b);
    a = a^b;
    b = b^a;
    a = a^b;
    printf("the swapped are %d and %d",a,b);
   
return 0;
}