#include<iostream>
using namespace std;
class Rectangle
	{	
	private:
  		 double length;
   		 double width;
	public:	
		Rectangle(){
				length=1;
 				width=1;
 			}
 		Rectangle(double l,double w){
 			length=l;
			 width=w;
			}
		void Area(){
			cout<<"\nlength:"<<length;
			cout<<"\nwidth:"<<width;
			cout<<"\narea of the rectangle :"<<length* width;
			}
	};
int main()
     {
     Rectangle R1;
     R1.Area();
     Rectangle R2(5,7);
     R2.Area();
     
     return 0; 
     }	
