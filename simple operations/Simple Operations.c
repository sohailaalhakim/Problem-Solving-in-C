// C Program to make simple calculations (add, sub, multiply, divide) on two integers
#include<stdio.h>
int main(){
    int stinteger=0 , ndinteger=0;
    printf("Please enter first integer\n");
    scanf("%d",&stinteger);
    printf("Please enter second integer\n");
    scanf("%d" , &ndinteger);

    int sum = stinteger+ndinteger;
    printf("Sum: %d + %d = %d\n",stinteger,ndinteger,sum);

    int sub = stinteger-ndinteger;
    printf("Sub: %d - %d = %d\n", stinteger,ndinteger,sub);

    int multi =stinteger*ndinteger;
    printf("Multiply: %d * %d = %d\n", stinteger,ndinteger,multi);

    int divid = stinteger/ndinteger;
    int Reminder = stinteger%ndinteger;

    printf("Divide: %d / %d = %d , ", stinteger,ndinteger,divid);
    printf("Reminder = %d", Reminder);
return 0;
}
