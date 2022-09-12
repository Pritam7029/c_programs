//wap into input some number into an array and print all odd numbers

#include<stdio.h>
#include<conio.h>
int main(){

int i , n , array[10];
printf(" how long does the array you want to be ");
scanf("%d",&n);
for ( i = 0; i < n; i++)
{
 scanf("%d",&array[i]);

}

for(i=0; i<n; i++)
    {
       // printf("all odd numbers are ");
        if(array[i]%2!=0)
        {
          
            printf("%d ", array[i]);
        }
    }

 return 0;
}
