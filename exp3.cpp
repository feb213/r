#include<iostream>
#include<string>
using namespace std;
class person{
private:string name;
	int age;
public:
	void person_details()
	{
	cout<<"enter name:";
	cin>>name;
	cout<<"enter age:";
	cin>>age;
	
	}
	void show_details()
	{
	cout<<name;
	cout<<age;
	}
};
class academics{
private:int roll_no;
	
public:
	float m[3];
	void get_academics_details()
	{
	cout<<"enter roll no :";
	cin>>roll_no;
	for (int i=0; i<3;i++){
		cout<<"enter marks:";
		cin>>m[i];
		
		}
	
	}
	void show_academics_details()
	{
	cout<<"roll no "<<roll_no;
	cout<<"m1"<<&m[0];
	cout<<"m2"<<&m[1];
	cout<<"m3"<<&m[2];
	}
};
class student:

public person,
public academics 
{
protected:float totalMarks;
		int percentage;



public:
	void total()
	{
	totalMarks= m[0]+m[1]+m[2] ;  
	percentage=totalMarks/3;
	
	}
	void show_student()
	{
	cout<<"total marks:"<<totalMarks;
	cout<<"\npercentage:"<<percentage;
	
	}
};
int main(){
	student s1;
		s1.person_details();			
		
		s1.get_academics_details();
		
		s1.total();
		s1.show_student();
}			
	
