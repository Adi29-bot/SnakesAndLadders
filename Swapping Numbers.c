#include<stdio.h>
#include<stdlib.h>
int a,b;
printf("Enter the values of a and b");
scanf("%d",&a);
scanf("%d",&b); 
printf("Before swapping a=%d, b=%d", a,b);

a=a+b;
b=a-b;
a=a-b;

printf("After swapping a=%d, b=%d");

return 0;

}
