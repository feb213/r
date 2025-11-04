
#include<iostream>
#include<string>
using namespace std;

class BankAccount{
  private:
   string acc_name;
   int acc_num;
   string acc_type;
   double bal;
   
   
  public:
    void details(string name,int acc_no,string type_of_acc,double balance){
      acc_name=name;
      acc_num=acc_no;
      acc_type=type_of_acc;
      bal=balance;
      cout<<"your  initial balance:"<<bal<<endl; 
    }
    void deposite_amount(int amount){
      bal+=amount;
      
    }
    
    
    void display(){
      cout<<"Name:"<<acc_name<<endl;
      cout<<"Account No:"<<acc_num<<endl;
      cout<<"Type of account:"<<acc_type<<endl;
      cout<<"your balance:"<<bal<<endl;
   }
 };
 
 int main(){
   BankAccount obj;
   obj.details("RAM",857856,"saving",210000);
   obj.deposite_amount(2000);
   obj.display();
   return 0;
   	
 }
 
