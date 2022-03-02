2. write a program using fns to 
- area of a rectangle passing len and width as parameters 
int find_area(.....);

#include<stdio.h>
int areaofrect(int length,int width){
    int area;
    area=length*width;
    return area;
}
int main(){
    int l=10,w=5;
    int area=areaofrect(l,w);
    printf("%d",area);
    
5.write a fn fibonacci(...) passing data as parameter
#include<stdio.h>
int fibonacci(int num);
int main(){
int num;
    printf("enter num:");
    scanf("%d",&num);
    printf("the fabonacci series is:");
    fibonacci(num);
}
int fibonacci(int num){
    int a=0,b=1,c;
    for(int i=0;i<num;i++){
printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
}}6.write a fn palindrome (..) to check if a number is palindome or not 

#include<stdio.h>
int palin(int num);
int main(){
    int num,sum=0;
    printf("enter num:");
    scanf("%d",&num);
   if(palin(num))
    printf("palindrome");
         else
         printf("not palindrome");
       }
int palin(int num){
    int sum=0,temp=num;
    while(temp>0){
     sum=sum*10+temp%10;
     temp=temp/10;
    }
    return num==sum;
     
3./*#include <stdio.h>
int swap(int x,int y);
int main(){
    int a=3,b=6;
    swap(a,b);
    printf("%d\n %d\n",a,b);
}
int swap(int m,int n){
   int temp=m;
   m=n;
   n=temp;
}*/
#include <stdio.h>
int swap(int x,int y);
int main(){
    int a=3,b=6;
    swap(a,b);
    printf("%d\n %d\n",a,b);
}
int swap(int m,int n){
   m=m+n;
   n=m-n;
   m=m-n;
}}#include <stdio.h>
int fun(int num);
int main()
{
    enum check{no,yes};//no=0 & yes=1
   int num;
   printf("enter num:");
   scanf("%d",&num);
   int result = fun(num);
   if(result==no)
   printf("ODD");
   else
   printf("EVEN");
   }
int fun(int num){
    if(num%2==no)
    return yes;//if it is even it returns yes else return no
    else
    return no;
}
