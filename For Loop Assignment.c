// 1. 1-->10 number print for loop

#include<stdio.h>
int main()
{
    for (int i=1; i<=10;i++){
        printf("%d",i);
    }
    return 0;
}

// 2. 50-->100 number print for loop

#include<stdio.h>
int main()
{
    for (int i=50; i<=100;i++){
        printf("%d",i);
    }
    return 0;
}

// 3. 56-->78 number print for loop

#include<stdio.h>
int main ()
{
    for(int i=56;i<=78;i++){
        printf("%d",i);
    }
    return 0;
}

// 4. 10---->1 number print for loop

#include<stdio.h>
int main ()
{
    for(int i=10;i>=1;i--){
        printf("%d",i);
    }

    return 0;
}

// 5. 100----->50 number print for loop

#include<stdio.h>
int main ()
{
    for(int i=100;i>=50;i--){
        printf("%d",i);
    }

    return 0;
}

// 6. 78---->56  number print for loop

#include<stdio.h>
int main ()
{
    for(int i=78;i>=56;i--){
        printf("%d",i);
    }

    return 0;
}

// 7. 1--->5 even number : 

#include<stdio.h>
int main ()
{
    int i;
    for(i=1; i<=5; i++){
        if(i%2==0){
             printf("%d\n", i);
        }
    }
    
  
    return 0;
}

// 8. 78--->56 odd number

#include<stdio.h>
int main ()
{
   int i;
   for(i=78;i>=56;i--){
       if(i%3==0){
           printf("%d\n",i);
       }
   }
  
    return 0;
}

// 9. 1--->10 number sum for loop through 

#include<stdio.h>
int main ()
{
    int i;
    int sum=0;
    for(i=1; i<=10; i++){
        sum=sum+i;
        
    }
    printf("the sum number of 1 to 10 is %d\n", sum);
  
    return 0;
}

// 10. factorial number

#include<stdio.h>
int main()
{
    int fact = 1;
    int num = 10;
    for(int i=1;i<=num;i++){
        fact=fact*i;
        
    }
    printf("%d",fact);

    return 0;
}

// 11. Fibonacci series 

#include<stdio.h>
int main()
{
   int n =10;
   int n1=0,n2=1,n3;
   printf("%d %d",n1,n2);
   for (int i=1;i<=n;i++){
       n3=n1+n2;
       printf("%d",n3);
       n1=n2;
       n2=n3;
   }
    return 0;
}
