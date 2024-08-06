// Assignment 5 Aug.2024
// 1

#include <stdio.h>
int main()
{
    int a;
    printf ("enter the value of a");
    scanf ("%d",&a);
    
    int b;
    printf ("enter the negative value of b");
    scanf ("%d",&b);
    
    float c;
    printf ("enter the float value of c");
    scanf ("%f",&c);
    
    int d;
    printf ("enter the value of d");
    scanf ("%d",&d);
    
    float e;
    printf ("enter the float value of e");
    scanf ("%f",&e);
    
    
    return 0;
    
}

// 2.

#include <stdio.h>
int main()
{
    char a;
    printf ("enter character r");
    scanf ("%c",&a);
    
    char b;
    printf ("enter character d");
    scanf (" %c",&b);
    
    char c;
    printf ("enter character k");
    scanf (" %c",&c);
    
    char d;
    printf ("enter character w");
    scanf (" %c", &d);
    
    char e;
    printf ("enter character o");
    scanf (" %c",&e);
    
    char  f;
    printf ("enter character p");
    scanf (" %c",&f);
    
    return 0;
    
}

// 3.

#include <stdio.h>
int main ()
{
    int a;
    printf ("enter the value of a");
    scanf ("%d",&a);
    return 0;
    
}

// 4. 

#include <stdio.h>
int main ()
{
    float a;
    printf ("enter the value of a");
    scanf ("%f",&a);
    return 0;
    
}

// 5.

#include <stdio.h>
int main ()
{
    char a;
    printf ("enter the value of a");
    scanf ("%c",&a);
    return 0;
    
}

// 6.

#include <stdio.h>
int main ()
{
    int a;
    printf ("entr the value of a");
    scanf ("%d",&a);
    
    float b;
    printf ("entr any float value of b");
    scanf ("%f",&b);
    
    char c;
    printf ("enter any character");
    scanf (" %c",&c);
    
    int d;
    printf ("enter the negative value");
    scanf (" %d",&d);
    
    float e;
    printf ("enter any float value of e");
    scanf ("%f",&e);
    
    return 0;
    
}

// 7.

#include <stdio.h>
int main ()
{
    int a;
    printf ("entr the value of a");
    scanf ("%d",&a);
    
    int b;
    printf ("entr the value of b");
    scanf ("%d",&b);
    
    int c = a+b;
    printf ("%d",c);
    
    return 0;
    
}

// 8.

#include <stdio.h>
int main ()
{
    int a;
    printf ("entr the value of a");
    scanf ("%d",&a);
    
    int b;
    printf ("entr the value of b");
    scanf ("%d",&b);
    
    int c = a-b;
    printf ("%d",c);
    
    return 0;
    
}

// 9.

#include <stdio.h>
int main ()
{
    int a;
    printf ("entr the value of a");
    scanf ("%d",&a);
    
    int b;
    printf ("entr the value of b");
    scanf ("%d",&b);
    
    int c = a*b;
    printf ("%d",c);
    
    return 0;
    
}

// 10.

#include <stdio.h>
int main ()
{
    int a;
    printf ("entr the value of a");
    scanf ("%d",&a);
    
    int b;
    printf ("entr the value of b");
    scanf ("%d",&b);
    
    int c = a/b;
    printf ("%d",c);
    
    return 0;
    
}

// 11.

#include <stdio.h>
int main ()
{
    int a;
    printf ("entr the value of a");
    scanf ("%d",&a);
    
    int b;
    printf ("entr the value of b");
    scanf ("%d",&b);
    
    int c;
    printf ("entr the value of c");
    scanf ("%d",&c);
    
    int d;
    printf ("entr the value of d");
    scanf ("%d",&d);
    
    int e = a+b+c+d;
    printf ("%d",e);
    return 0;
    
}

// 12.

#include <stdio.h>
int main ()
{
    int a;
    printf ("enter the value of a");
    scanf ("%d",&a);
    
    int b;
    printf ("enter the value of b");
    scanf ("%d",&b);
    
    int c;
    printf ("enter the value of c");
    scanf ("%d",&c);
    
    int d;
    printf ("enter the value of d");
    scanf ("%d",&d);
    
    int e;
    printf ("enter the value of e");
    scanf ("%d",&e);
    
    int f = a*b+c/d-e;
    printf ("%d",f);
    
    return 0;
    
}

// 13.

#include <stdio.h>
int main ()
{
    float a;
    printf ("enter the float value of a");
    scanf ("%f",&a);
    
    float b;
    printf ("enter the float value of b");
    scanf ("%f",&b);
    
    float c;
    printf ("enter the value of c");
    scanf ("%f",&c);
    
    int d;
    printf ("enter the value of d");
    scanf ("%d",&d);
    
    
    float e = a*b-c/d;
    printf ("%f",e);
    
    return 0;
    
}

// 14.

#include <stdio.h>
int main ()
{
    float a;
    printf ("enter the float value of a");
    scanf ("%f",&a);
    
    int b;
    printf ("enter the value of b");
    scanf ("%d",&b);

    int c;
    printf ("enter the value of c");
    scanf ("%d",&c);
    
    int d;
    printf ("enter the value of d");
    scanf ("%d",&d);
    
    float e;
    printf ("enter the float value of e");
    scanf ("%f",&e);
    
    float f;
    printf ("enter the float value of f");
    scanf ("%f",&f);
    
    float g = a*(b-c)/d+e-f;
    printf ("%f",g);
    
    
    return 0;
    
}


// write a c program and check a number is greater than 10 or not:

#include <stdio.h>
int main ()
{
    int num;
    printf ("enter the number");
    scanf ("%d",&num);
    if (num > 10){
        printf("number is greater then 10");
    }
    else {
        printf ("this number is not greater then 10");
    }
    return 0;
    
}
    
    
// write a c program and check a number is greater than 50 or not:

#include <stdio.h>
int main ()
{
    int num;
    printf ("enter the number");
    scanf ("%d",&num);
    if (num > 50){
        printf("number is greater then 50");
    }
    else {
        printf (" this number is not greater then 50");
    }
    return 0;
    
}
    

// write a c program and check a number is greater than 45  or not:
    
#include <stdio.h>
int main ()
{
    int num;
    printf ("enter the number");
    scanf ("%d",&num);
    if (num > 50){
        printf("number is greater then 50");
    }
    else {
        printf (" this number is not greater then 50");
    }
    return 0;
    
}
    

// write a c program and check a user is valid for voter or not ? 

#include <stdio.h>
int main ()
{
    int age;
    printf ("enter the number");
    scanf ("%d",&age);
    if (age > 18){
        printf("user is vailed for vote");
    }
    else {
        printf ("user is not vailed for vote");
    }
    return 0;
    
}


// check a number is even or odd : 

#include <stdio.h>
int main ()
{
    int num;
    printf ("enter the number");
    scanf ("%d",&num);
    if (num %2 == 0){
        printf("number is even");
    }
    else {
        printf ("number is not even");
    }
    return 0;
    
}
    

// write a c program and check a number is divisible by 5 or not ?

#include <stdio.h>
int main ()
{
    int num;
    printf ("enter the number");
    scanf ("%d",&num);
    if (num %5 == 0){
        printf("number is divisible by 5 ");
    }
    else {
        printf ("number is not divisible by 5 ");
    }
    return 0;
    
}
    
    
// write a c program input character 'a' then print apple otherwise input is not valid

#include <stdio.h>
int main ()
{
    char a;
    printf ("enter the character");
    scanf ("%c",&a);
    if (a == 'a'){
        printf("apple");
    }
    else {
        printf (" input is not valid");
    }
    return 0;
    
}
    
    
// write a c program input character 'h' then print house otherwise input is not valid 


#include <stdio.h>
int main ()
{
    char h;
    printf ("enter the character");
    scanf ("%c",&h);
    if (h == 'h'){
        printf("house");
    }
    else {
        printf (" input is not valid");
    }
    return 0;
    
}
   
   
// check a input is vowel or consonant

#include <stdio.h>
int main ()
{
    char a;
    printf ("enter the character");
    scanf ("%c",&a);
    if (a == 'a' || a == 'e' || a == 'o' || a == 'i' || a == 'u'){
        printf("vowel");
    }
    else {
        printf (" consonant ");
    }
    return 0;
    
}
   
   
// write a c program input character when user input p , e , a , k peak word other wise input is not valid 

#include <stdio.h>
int main ()
{
    char a;
    printf ("enter the character");
    scanf ("%c",&a);
    if (a == 'p' || a == 'e' || a == 'a' || a == 'k'){
        printf("peak");
    }
    else {
        printf (" input is not valid ");
    }
    return 0;
    
}
   
   
// write a c program input character when user input q,w,e,r,t,y,u,i,o,p upper line other wise input is not valid 

#include <stdio.h>
int main ()
{
    char a;
    printf ("enter the character");
    scanf ("%c",&a);
    if (a == 'q' || a == 'w' || a == 'e' || a == 'r' || a == 't' || a == 'y' || a == 'u' || a == 'i'
    || a == 'o' || a == 'p'){
        printf("upper line");
    }
    else {
        printf (" input is not valid ");
    }
    return 0;
    
}
   
   
// write a c program input number when user input a number 1 then print one other wise input is not valid

#include <stdio.h>
int main ()
{
    int a;
    printf ("enter the number");
    scanf ("%d",&a);
    if(a == 1){
        printf (" one ");
    }
    else { 
        printf ("input is not valid ");
    }
    return 0;
    
}
