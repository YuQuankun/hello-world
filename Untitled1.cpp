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
 Number::Number(int n)//���幹�캯�� 
 {
 	num=n;
 }
int Number::maxDivisor(Number no)//���Լ������������ֵ��һ�����󣿣� 
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
void Number::show()//��ʾ���� 
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
	 	Number no1(n1),no2(n2);//n1 n2 �������������档 
	 	no3=no1.maxDivisor(no2);
	 	std::cout<<no3<<"\n";
	  } 
 }
 
