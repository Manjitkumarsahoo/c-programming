#include<stdio.h>
int main(){
    int a=45;
    int *ptr=&a;
    int **dptr=&ptr;
    printf("a is : %d\n",a);
    printf("address of a is : %d\n",&a);
    printf("ptr pointing to the address : %u\n",ptr);
    printf("dptr pointing to the address :%u\n",dptr);
    printf("*ptr is : %d\n",*ptr);
    printf("**dptr is :%d\n",**dptr);
    return 0;
}