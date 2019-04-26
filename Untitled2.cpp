#include <iostream>
class HanXin
{
	public:
		void line3(int n);
		void line5(int n);
		void line7(int n);
		int showMany();
	private:
	    int n1;
		int n2;
		int n3; 
 } ;
 void HanXin::line3(int n)
 {
 	n1=n;
 }
 void HanXin::line5(int n)
 {
 	n2=n;
 }
 void HanXin::line7(int n)
 {
 	n3=n;
 }
 int HanXin::showMany()
 {
 	int n;
 	for(n=10;n<=100;n++)
 	{
 		if(n%3==n1&&n%5==n2&&n%7==n3)
 		{
 			std::cout<<n<<"\n";
 			return 0;
		 } 
	 }
	 std::cout<<"Impossible"<<"\n";
 }
 int main()
 {
 	int n,n1,n2,n3;
 	std::cin>>n;
 	for(int i=0;i<n;i++)
 	{
 		std::cin>>n1>>n2>>n3;
 		HanXin hx;
		 hx.line3(n1);
		 hx.line5(n2);
		 hx.line7(n3);
		 hx.showMany(); 
	 }
 }
