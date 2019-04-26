#include <iostream>
class Number
{
	public:
		Number(int n);
		int maxDivisor(Number no);
		void show();
	private:
		int num;
 } ;
 Number::Number(int n)//定义构造函数 
 {
 	num=n;
 }
int Number::maxDivisor(Number no)//最大公约数函数，返回值是一个对象？？ 
 {
 	int min; 
 	if(num<no.num){min=num;
	 }
	 else{min=no.num;
	 } 
	 while(!(num%min==0&&no.num%min==0))
	 {
	 	min=min-1;
	 }
	 return min;
 }
void Number::show()//显示函数 
 {
 	std::cout<<num<<"\n";
 }
 int main()
 {
 	int n,n1,n2;
 	int no3;
 	std::cin>>n;
 	for(int i=0;i<n;i++)
	 {
	 	std::cin>>n1>>n2;
	 	Number no1(n1),no2(n2);//n1 n2 参数传入了里面。 
	 	no3=no1.maxDivisor(no2);
	 	std::cout<<no3<<"\n";
	  } 
 }
 
