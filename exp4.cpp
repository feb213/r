#include<iostream>
using namespace std;

	class number
	{
	private:
		int value;
	public: number(int v=0)
		{
		
		value=v;
		
		}
		void display()
		{
		cout<<"\nvalue is :"<<value;
		}
		number operator++()//member function
		{
			value+=100;
			return value;
		}
		friend number operator++(number&n,int);
	};
		number operator++(number&n,int)
	{
		number temp=n;
		n.value += 100;
	return temp;
	}
	
	int main()
	{
	number num1(100),num2(300);
	num1.display();
	num2.display();
	++num1;
	num1.display();
	num2++;
	num2.display();
	
	return 0;
	}
