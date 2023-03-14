// Q1 write a porgram to calculate area of rectangle:l*b
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("enter length and breadth :\n");
//     scanf("\n%d\n %d",&a ,&b);
//     printf("\nArea of rectangle is : %d",a*b);
//     return 0;
// }








// Q2perimeter of rectangle:2*(l+b)
//  #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("enter length and breadth :\n");
//     scanf("\n%d\n %d",&a ,&b);
//     printf("\nPerimeter of rectangle is : %d",2*(a+b));
//     return 0;
// }



















// Q3 Area of circle: 3.14*r*r
//  #include<stdio.h>
// int main()
// {
//     float r;
//     printf("enter radius:\n");
//     scanf("\n%f",&r);
//     printf("\nArea of circle is : %.2f",3.14*r*r);
//     return 0;
// }






//Q4 Circumference of circle: 2*3.14*r
//  #include<stdio.h>
// int main()
// {
//     float r;
//     printf("enter radius:\n");
//     scanf("\n%f",&r);
//     printf("\nCircumference of circle is : %.2f",2*3.14*r);
//     return 0;
// }







//Q5 Calculate simple interest : P*R*T/100
//  #include<stdio.h>
// int main()
// {
//     float P,R,T;
//     printf("enter Principal,Rate and Time in(yrs):\n");
//     scanf("\n%f\n%f\n%f",&P, &R, &T);
//     printf("\n Simple Interest is : %.2f",(P*R*T)/100);
//     return 0;
// }
 








//Q6 Input basic salary and calculate total and bonus salary
//  #include<stdio.h>
// int main()
// {
//     float basic,bonus,total;
    
//     printf("enter basic salary:\n");
//     scanf("\n%f",&basic);
//     bonus=0.1*basic;
//     total=basic+bonus;
//     printf("\nyour Bonus Salary is : %.2f \nyour Total Salary is:%.2f",bonus,total);
//     return 0;
// }










//Q7 Area of triangle using herons formula:s=a+b+c/2,A=root(s*(s-a)*(s-b)*(s-c))
//  #include<stdio.h>
//  #include<math.h>
// int main()
// {
//     float s,a,b,c,A;
   
//     printf("Enter a,b,c:\n");
//     scanf("\n%f\n%f\n%f",&a, &b, &c);
//      if(a+b>c && a+c>b && b+c>a)
//     {
//         s=(a+b+c)/2;
//         A=pow(s*(s-a)*(s-b)*(s-c),0.5);
//         printf("\nArea of triangle using herons formula:%.2f",A);
//     }
//     else
//     {
//         printf("\nCondition for Triangle not met");
//     }
//     return 0;
// }







// #include <stdio.h>
// int main()
// {
//     int pr,nr,uc;
//     char mtype;
//     float rpu,bill;
//     printf("\n Enter pr,nr:\n");
//     scanf("%d %d", &pr, &nr);
//     printf("\n Enter mtype:\n");
//     fflush(stdin);
//     scanf("%c", &mtype);
//     uc=nr-pr;
//     printf("\nUnit consumption is:%d",uc);
//     if(mtype=='d'||mtype=='D')
//     {   rpu=4.5;
//         bill=uc*rpu;
//         printf("\nBill is %.2f",bill);
//     }
//     else if(mtype=='c'||mtype=='C')
//     {   
//         rpu=7;
//         bill=uc*rpu;
//         printf("\nBill is %.2f",bill);
//     }
//     return 0;
// }







// #include<stdio.h>
// int main()
// {
//     int month,year ;
//     printf("\nEnter month and year\n");
//     scanf("%d %d",&month, &year);
//     if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
//         printf("\n31");
//     else if (month==4||month==6||month==9||month==11)
//         printf("\n30");
//     else
//     {   
//         if(month==2)
//         {
//             //if(year%4==0&&year%100!=0 && year%400==0)
//             if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))


//                 printf("\n29");
//             else
//                 printf("\n28");
//         }
//         else
//             printf("Invalid Input");
//     }
//     return 0;
// }




//Switch Cases
//An insurance company insures its drivers on thee basis of following conditions:
//If driver is married
//if driver is unmarried male and age>25
//if driver is female and age >35
// Input marital status and male /female age and check wheather driver can be ensured or not


// #include<stdio.h>
// int main()
// {
//     int age;
//     char status,l,u,m,f,driver;
//     printf("Enter your Marital status: enter l for married and u for unmarried\n");
//     scanf("%c",&status);
   
//     if(status=='l')
//     {
//         printf("\nYou are eligible for insurance");

//     }
//     else if(status=='u')
//     {  
//         printf("\nEnter your gender: enter m for male and f for female\n");
//         fflush(stdin);
//         scanf("%c",&driver);
//         fflush(stdin);
//         printf("\nEnter your age:\n");
//         scanf("%d",&age);
//         if(driver=='m' && age>25)
//         {
//             printf("\nYou are eligible for insurance\n");
//         }
//         else if(driver=='f' && age>35)
//         {
//             printf("\nYou are eligible for insurance");

//         }
//         else 
//         {
//             printf("\nYou are not eligible for insurance");
//         }
//     }
//     else
//     {
//         printf("\nYou are not eligible for insurance");
//     }
//     return 0;

// }


//OR    with switch case

// #include<stdio.h>
// int main()
// {
//     int age;
//     char choice,gender;
//     printf("Enter your Marital status: enter l for married and u for unmarried\n");
//     scanf("%c",&choice);
//     switch(choice)
//     {
//         case 'l':printf("\nYou are eligible for insurance\n");
//                  break;
//         case 'u':printf("\nEnter your gender: enter m for male and f for female\n");
//                  fflush(stdin);
//                  scanf("%c",&gender);
//                  fflush(stdin);
//                  printf("\nEnter your age:\n");
//                  scanf("%d",&age);
//                  switch(gender){
//             case 'm':if(age>25)
//             {
//                 printf("\nYou are eligible for insurance\n");    
//                 break;
//             }
//             case 'f':if(age>35)
//             {
//                 printf("\nYou are eligible for insurance\n");
//                 break;
//             }

//             default:printf("\nYou are not eligible for insurance\n");
//         }
//         break;
//         default:printf("\nYou are not eligible for insurance\n");
           
//     }
//     return 0;
// }






//create a color menu r for red ,b for blue, g for green
// #include<stdio.h>
// int main()
// {
//     char choice;
//     printf("\nEnter your choice:\nRfor Red\nG for Green\nB for Blue\n");
//     scanf("%c",&choice);
//     switch(choice)
//     {
//         case 'r':
//         case 'R':printf("\nRoses are Red");
//                  break;
//         case 'b':
//         case 'B':printf("\nSky is Blue");
//                  break;
//         case 'g':
//         case 'G':printf("\nGrass os Green");
//                  break;
//         default :printf("\nInvalid Input");
//     }
//     return 0;
// }











