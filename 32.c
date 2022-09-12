/*//wap to input 3 angle of triangle and print its type....
#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,c;
  printf("enter the first angle of this triangle");
  scanf("%D",&a);
  printf("enter the second angle of this triangle:");
  scanf("%d",&b);
  printf("enter the third angle of this angle:");
  scanf("%d",&c);
   if(a&&b&&c < 90)
   {printf("this is an acute triangle..");}
   else if(a || b|| c ==90)
   {printf("this a right triangle..");}
   else if(a|| b || c >90)
   {printf("this is obtuse triangle");}  



    return 0;

}*/
/*//wap to input 3 sides of triangle and print its type...
#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b,c;
   printf("enter the first side of the triangle:");
   scanf("%d",&a);
   printf("enter the second side of the triangle:");
   scanf("%d",&b);
   printf("enter the third side of the triangle:");
   scanf("%d",&c);
   if(a==b && b==c)
   {printf("this is a Equilateral Triangle..");}
   else if(a==b || b==c || c==a)
   {printf("this  is a Isosceles Triangle.. ");}
   else {printf("this is aScalene Triangle ");}


  return 0;
}*/
// wap to input 3 sides of tringle and check whether the triangle is 
/*#include<stdio.h>
#include<conio.h>
 int main()
 {
    int a,b,c;
    printf("enter the first angle:");
    scanf("%d",&a);
    printf("enter the second angle:");
    scanf("%d",&b);
    printf("enter the third angle:");
    scanf("%d",&c);
    if(a==90 || b==90 || c==90)
    {
      printf("this is a right triangle....");
    }
else {
  printf("this is not a right triangle..... ");
}



   return 0;
 }*/
 // wap to input temp and convert celsius to fahrenheit or fahernheit to celsius according to user choice....

/* #include<stdio.h>
 #include<conio.h>
 int main()
 {
    float cl,fh; int choice;
     
  printf(" 1. convert temp f to c \n or \n 2. convert c to f:");

  printf(" 1 or 2 chose one....:");
  scanf("%d",&choice);
  if(choice==1)
  { printf("enter the temp in F:");
     scanf("%f",&fh);
     cl=(fh-32)/1.8;
     printf("temp in c =%f",cl);

  }
  else if(choice==2);
  {
     printf("ener the temp in c:");
     scanf("%f",&cl);
     fh= (cl*1.8)+32;
     printf("temp in f=%f",fh);

  }

   return 0;
 }*/
//wap to input a number and find its factorial....
/*#include<stdio.h>
#include<conio.h>
int main()
{
   int number, fact=1;
   printf("enter the number:");
   scanf("%d",& number);
 int i;
 for(i=1;i<=number;i++)
 {
    fact=fact*i;

 }
printf("factorial of this number is ... %d",fact);



  return 0;
} */

// wap to find the sum 1+2^+3^+4^+.....n^n
/*#include<stdio.h>
#include<conio.h>
int main()
{
   int num1,num2, sum=0;
   printf("enter your values..");
   scanf("%d",&num2);
   for(num1=1; num1<=num2;num1++ )
   {
     sum=num1*num1;
   }
   printf("sum= %d",sum);

  return 0;
}*/
//wap to find the sum of 1+2^+3^-4^+...+n^n
/*#include<stdio.h>
#include<conio.h>
int main()
{
  int i,num,sum=0;546

  printf("enter tyour number:");
  scanf("%d",&num);
  for(i=1; i<=num; i++)
  {
    if(num%2==0){
      sum=sum-pow(i,2);
    }
    else{
      sum=sum+pow(i,2);
    }

  }
 printf("sum= %d",sum);

  return 0; 
}*/
/*#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b;
   printf("enter  the first numbers:");
   scanf("%d",&a);
   printf("enter the second number:");
   scanf("%d",&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("a=%d b=%d after swaping the two numbers...",a,b);


  return 0;
}*/
/*#include<stdio.h>
#include<conio.h>
int main()
{
   float temp_1,temp_2;
   printf("enter the temperture in far:");
   scanf("%f",&temp_1);
   temp_2=(temp_1-32)/1.800;
   printf("the temp in celsius=%f",temp_2);

  return 0;
}*/
/*calculate the distance b/w two points. Example: x1:025 y1:15 x2:35 y2:10 Distance b/w the points:11.18034
#include<stdio.h>
#include <math.h>
int main()
{ 
  float x1,x2,y1,y2,d1 ;
  printf("Enter the co ordinates of the points: x1 y1 x2 y2\n");
  scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
  
  d1= sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
  printf("The distance between two points is %f",d1);


  return 0;
}
#include <stdio.h>
int main()
{
  int num_1, num_2, num_3;
  printf("Enter the 3 numbers to be compered:\n");
  scanf("%d %d %d",&num_1, &num_2, &num_3);
  
  if(num_1>num_2 && num_1>num_3)
   printf("The greatest among the 3 numbers is %d ", num_1);

  else if (num_2>num_3)
   printf("The greatest among the 3 numbers is %d ", num_2);
  
  else if 
    if(num_1 == num_2)
     printf("The greatest among the 3 numbers is %d ", num_2);
    else if(num_2 == num_3 )
     printf("The greatest among the 3 numbers is %d ", num_2);
    
    

  
  (num_1 == num_2 && num_2 == num_3)
   printf("The numbers you entered were all equal %d = %d = %d", num_1, num_2, num_3);
   
  else 
   printf("The greatest among the 3 numbers is %d ", num_3);

  return (0);
}*/
#include <stdio.h>
int main()
{
  int i=5, m;
  m=i++;
  printf(" %d %d", i, m);
  



  return 0;
}
#include<stdio.h>
#incule<conio.h>
void main()
