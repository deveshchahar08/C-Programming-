// assignment 6 aug. 2024

// 1) weekdays

#include <stdio.h>
int main ()
{
	int week;
	printf ("entr the week number 1to 7");
	scanf ("%d",&week);
	if(week==1) {
		printf("monday");
	}
	else if (week == 2) {
		printf("tuesday");
	}
	else if (week == 3) {
		printf("wednesday");

	}
	else if (week==4) {
		printf("thursday");

	}
	else if (week==5) {
		printf("friday");
	}
	else if (week==6) {
		printf("saturday");

	}
	else if (week==7) {
		printf ("sunday");

	}
	else {
		printf ("input not valid");

	}
	return 0;
}

// 2) months

#include <stdio.h>
int main ()
{
	int month;
	printf ("entr the month number 1 to 12");
	scanf ("%d",&month);
	if(month==1) {
		printf("janury");
	}
	else if (month == 2) {
		printf("februry");
	}
	else if (month == 3) {
		printf("march");

	}
	else if (month==4) {
		printf("april");

	}
	else if (month==5) {
		printf("may");
	}
	else if (month==6) {
		printf("june");

	}
	else if (month==7) {
		printf ("july");

	}

	else if (month==8) {
		printf ("august");

	}
	else if (month==9) {
		printf("september");

	}
	else if (month==10) {
		printf("october");

	}
	else if (month==11) {
		printf("november");

	}
	else if (month==12) {
		printf("december");

	}
	else {
		printf ("input not valid");

	}
	return 0;

}

//3) seasons

#include <stdio.h>

int main()
{
	int season;
	printf("enter the value ");
	scanf("%d",&season);
	if(season==1)
	{
		printf("spring");
	}
	else if(season==2)
	{
		printf("summer");
	}
	else if(season==3)
	{
		printf("monsoon");
	}
	else if(season==4)
	{
		printf("autumn");
	}
	else if(season==5)
	{
		printf("winter");
	}
	else
	{
		printf("invalid input");
	}

	return 0;
}


// 4) upper line, middle line, lower line

#include <stdio.h>

int main()
{
	char a;
	printf("enter the value ");
	scanf("%c",&a);
	if(a=='q' || a=='w' || a=='e' || a=='r' || a=='t'|| a=='y' || a=='u' || a=='i' || a=='o' || a=='p')
	{
		printf("upper line");
	}
	else if(a=='a'|| a=='s' || a=='d' || a=='f' || a=='g' || a=='h' || a=='j' || a=='k' || a=='l' )
	{
		printf("mid line");
	}
	else if(a=='z'|| a=='x' || a=='c' || a=='v' || a=='b' || a=='n' || a=='m' )
	{
		printf("lower line");
	}
	else
	{
		printf("invalid input");
	}

	return 0;
}


/* 5)
a :apple
b :ball
c :cat
d :dog
*/

#include <stdio.h>

int main()
{
	char a;
	printf("enter the value ");
	scanf("%c",&a);
	if(a=='a') {
		printf("apple");

	}
	else if(a=='b') {
		printf("ball");
	}
	else if(a=='c') {
		printf("cat");
	}
	else if(a=='d') {
		printf("dog");
	}
	else {
		printf("invalid input");
	}

	return 0;
}


// 6) Add multiiply division swap numbers all in one


#include <stdio.h>

int main()
{
	char a;
	printf("enter any character");
	scanf("%c",&a);
	if (a=='a') {
		int num1,num2,num3;
		printf("enter the value of num1,num2");
		scanf("%d %d",&num1,&num2);
		num3=num1+num2;
		printf("%d",num3);
	}
	else if (a=='b') {
		int num1,num2,num3;
		printf("enter the value of num1,num2");
		scanf("%d %d",&num1,&num2);
		num3=num1-num2;
		printf("%d",num3);

	}
	else if (a=='c') {
		int num1,num2,num3;
		printf("enter the value of num1,num2");
		scanf("%d %d",&num1,&num2);
		num3=num1*num2;
		printf("%d",num3);

	}
	else if (a=='d') {
		int num1,num2,num3;
		printf("enter the value of num1,num2");
		scanf("%d %d",&num1,&num2);
		num3=num1/num2;
		printf("%d",num3);

	}
	else if (a=='e') {
		int a,b;
		printf("enter the value of a,b");
		scanf("%d %d",&a,&b);
		a=a+b;
		b=a-b;
		a=a-b;
		printf("%d %d",a,b);

	}
	else if (a=='f') {
		int a,b,temp;
		printf("enter the value of a,b");
		scanf("%d %d",&a,&b);
		temp=a;
		a=b;
		b=temp;
		printf("%d %d",a,b);

	}

	else {
		printf("invalid");
	}

	return 0;
}


// 7) Divisibility program


int a;
printf("enter the value ");
scanf("%d", &a);
if(a%2==0 && a%3==0)
{
	printf("divisible by both");
}
else if(a%6==0 || a%9==0)
{
	printf("divisible");
}
else if(a%5==0 && a%4==0)
{
	printf("divisible by both");
}
else if(a%3==0 || a%8==0)
{
	printf("divisible");
}
else
{
	printf("invalid input");
}

return 0;
}


// 8) Between the numbers


#include<stdio.h>
int main()
{
	int a;
	printf("enter the value ");
	scanf("%d",&a);
	if (a>=1 && a<=10)
	{
		printf("this number is between 1 to 10");
	}
	else if (a>=11 && a<=20)
	{
		printf("this number is between 11 to 20");
	}

	else if (a>=34 && a<=89)
	{
		printf("this number is between 34 to 89");
	}
	else
	{
		printf("invalid input");
	}

	return 0;
}

// 9) Student fail pass


#include<stdio.h>
int main()
{
	int maths,science,computer,english,hindi;
	printf("enter the marks of maths,science,computer,english,hindi ");
	scanf("%d %d %d %d %d", & maths, & science, & computer, & english, & hindi);
	if(maths>36 && science>36 && computer>36 && english>36 && hindi>36)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}

	return 0;
}


// 10) average marks


#include<stdio.h>
int main()
{
    int maths,science,computer,english,hindi,total,avg;
    printf("enter the marks of maths,science,computer,english,hindi: ");
    scanf("%d %d %d %d %d", & maths, & science, & computer, & english, & hindi);
    if(maths>36 && science>36 && computer>36 && english>36 && hindi>36)
    {
        total=maths+science+computer+english+hindi;
        printf("total marks is:%d\n",total);
        avg=total/5;
        printf("avg marks is:%d",avg);
    }
    else
    {
        printf("fail");
    }
    
    return 0;
}


// 11) Celcius fahrenheit change

int main()
{
    int a;
    float c,f;
    printf("enter 1 for temperature in fahrenheit or 2 for temperature in celsius ");
    scanf("%d",&a);
    if (a==1){
    printf("enter the temperature in celsius");
    scanf("%f",&c);
    f=(9/5.0)*c+32;
    printf("we get temperature in fahrenheit: %f",f);
    }
    else if (a==2)
    {
        printf("enter the temperature in fahrenheit");
        scanf("%f",&f);
        c=(f-32)*5/9.0;
        printf("we get temperature in celsius: %f",c);
        }
        else{
            printf("dont want to change");
        }
    return 0;
}


// 12) Percentage and grade


#include<stdio.h>
int main()
{
    int maths,science,computer,english,hindi,total;
    float percentage;
    printf("enter the marks of maths,science,computer,english,hindi: ");
    scanf("%d %d %d %d %d", & maths, & science, & computer, & english, & hindi);

        total=maths+science+computer+english+hindi;
        printf("total marks is:%d\n",total);
        percentage=(total/500.0)*100;
        printf("percentage is %f \n",percentage);
        if(percentage>80)
        {
            printf("A");
        }
        else if (percentage>=60)
        {
            printf("B");
        }
        else if (percentage>=50)
        {
            printf("C");
        }
        else if (percentage>=45)
        {
            printf("D");
        }
        else if (percentage>=25)
        {
            printf("E");
        }
        else 
        {
            printf("F");
        }
        return 0;
}


// 13) Electricity bill 

#include <stdio.h>

int main()
{
    int unit, amount, dis,  netamount;
    printf("name:devesh\n");
    printf("enter units consumed=");
    scanf("%d",&unit);
  if(unit>=1 && unit<=10)
  {
      amount=unit*10;
      printf("amount: %d",amount);
      printf("\n discount 10%% \n ");
      netamount=amount-(amount*10/100);
      printf("total pay amount %d",netamount);
  }
    else if(unit>=11 && unit<=20)
  {
        amount=unit*10;
        printf("amount: %d",amount);
    
      printf("discount 15%% \n");
      netamount=amount-(amount*15/100);
      printf("total pay amount %d",netamount);
  }
  
        else if(unit>=21 && unit<=40)
  {
      amount=unit*10;
      printf("amount: %d",amount);
      printf("\n discount 30 %% \n");
      netamount=amount-(amount*30/100);
      printf("total pay amount %d",netamount);
  }
        else if( unit>=41 && unit<=50)
  {
      amount=unit*10;
      printf("amount: %d",amount);
      printf("\n discount 50%% \n");
      netamount=amount-(amount*50/100);
      printf("\n total pay amount= %d",netamount);
  }
  
  else{
       amount=unit*10;
      printf("\nno discount");
      printf("\ntotal payable amount= %d",amount);
  }
  
 
    return 0;
}


// 14) Employe salary


#include <stdio.h>

int main()
{
    int holiday, salary=40000 ,netsalary ;
   printf("name:devesh\n");
   printf("address: 28 jp colony\n");
   printf("bank details:123456789\n");
   printf("salary:40000\n") ;
   printf("enter no of holidays taken=");
   scanf("%d",&holiday);
   if(holiday==1)
   {
       printf("allot:40000(full salary)\n");
       printf("holiday:1");
   }
   else if(holiday>=2 && holiday<=5)
   {
       netsalary=salary-(salary*5/100);
       printf("allot:  %d",netsalary);
   }
   else if(holiday>=6 && holiday<=14)
   {
       netsalary=salary-(salary*10/100);
       printf("allot:  %d",netsalary);
   }
   else if(holiday==15)
   {
       netsalary=salary-(salary*50/100);
       printf("allot:  %d",netsalary);
   }
    else
    {
             printf("no salary");
    }
    
    return 0;
}

// 14) Write a C program to read the roll no, name,fnname and marks of three subjects and calculate the total, percentage and division.



#include<stdio.h>
int main()
{
    int a,b,c, total;
    float per;
    printf ("roll number of student\n");
    printf ("name of student devesh chahar \n");
    printf ("fathers name: virendra singh\n");
    printf ("mothers name: vimlesh fsujdsr\n");
    printf ("adress: gopal garh bharatpur rajasthan\n");
    printf ("contct: 9983102207\n");
    printf ("input the marks of physics, maths, bio\n");
    scanf ("%d %d %d", &a,&b,&c);
    printf ("physics:%d\n",a);
    printf ("maths:%d\n",b);
    printf ("bio: %d\n",c);
    total = a+b+c;
    printf ("total:%d\n",total);
    per=(total/300.0)*100;
    printf("per:%f\n",per);
   
    
    

    return 0;
    
}
