#include <iostream>
/*writing a function swap that takes two numbers as input 
parameters and swap them, display the swapped numbers from the main function.*/
using namespace std;

double swap(double &num1,double &num2); //function prototyping & using call by refrence

int main() 
{
	double num1,num2;
	cout<<"Enter First Number: "; cin>>num1;
	cout<<"Enter second Number: "; cin>>num2;
	swap(num1,num2); //function call
	cout<<endl<<endl;
	cout<<"First number after swap= "<<num1<<endl;
	cout<<"Second number swap= "<<num2;
	
	return 0;
}
double swap(double &num1,double &num2) //funtion defination
{
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	
	}
