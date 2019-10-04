#include<stdio.h>
int main()
 {
 int A,B,Temp;
 printf("enter the values ");
 scanf("%d %d",&A,&B);
 Temp=A;
 A=B;
 B=Temp;
 printf("the values are %d %d",A,B);
 printf("\n");
 return 0;
}
