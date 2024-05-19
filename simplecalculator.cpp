#include<iostream>
using namespace std;
int main()
{
int num1,num2;
cout<<"enter two numbers to perform arithmetic operations :";
cin>>num1>>num2;
char operation;
cout<<"\nEnter the mode of operation you need to perform :";
cin>>operation;
switch(operation)
{
case '+' :

           cout<<num1<<"+"<<num2<<"="<<num1+num2;
           break;
case '-' :
           if(num1>num2) cout<<num1<<"-"<<num2<<"="<<num1-num2;
            else cout<<num2<<"-"<<num1<<"="<<num2-num1;
           break;
case '*' :
           cout<<num1<<"*"<<num2<<"="<<num1*num2;
           break;   
case '/':
           cout<<num1<<"/"<<num2<<"="<<num1/num2;
           break;
}
return 0;
}