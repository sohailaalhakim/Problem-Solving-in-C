// C Program to add two integers
#include<stdio.h>
int main(){
    int x;
    int y;
    printf("Please enter first integer:\n");
    scanf("%d" , &x);
    printf("Please enter second integer:\n");
    scanf("%d" , &y);
    int a = x + y;
    printf("%d + %d = %d " , x , y , a);
return 0;
}
