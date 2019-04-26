#include <iostream>
#include <math.h>
class Number
{
	public:
		Number(int n,int m);
		int converto(int num);
		void show();
	private:
		int num1;
};
Number::Number(int n,int m=10)
{
	num1=n;
}
int Number::converto(int num)
{
	int i=0;
	int num2=0;
	while(num1>=num)
	{
		num2+=(num1%num)*pow(10,i);
		num1=num1/num;
		i++;
	}
	num2=num2+num1*pow(10,i);
	return num2; 
}
int main()
{
	int n,n1,n2;
	std::cin>>n;
	for(int i=0;i<n;i++)
	{
		std::cin>>n1>>n2;
		Number no1(n1,10);
	    int no3=no1.converto(n2);
		std::cout<<no3<<"\n"; 
	}}
