#include<iostream>
#include<string>
using namespace std;
class student{
    private:
        string name;
        int marks;
    public:
        void getData(){
            cout<<"Enter name:";
            cin>>name;
            cout<<"Enter marks:";
            cin>>marks;
        }
        void showData(){
            cout<< name <<"\t"<<marks<<"\n";
        }

        string getName(){return name;}
        int getMarks(){return marks;}
        //----------Overload Sort() fn-----------
        static void sort(student s[],int n);
        static void sort(student s[],int n,int);

} ;
void student::sort(student s[],int n){
    for(int i=0; i < n-1 ;i++){
        for(int j =i+1;j<n;j++){
            if(s[i].getName()>s[j].getName()){
                swap(s[i],s[j]);
            }
        }
    } 
    cout<<"\nSorted data by Name\n";
    for(int i=0;i<n;i++)
        s[i].showData();
}
void student::sort(student s[],int n,int){
    for(int i=0; i < n-1 ;i++){
        for(int j =i+1;j<n;j++){
            if(s[i].getMarks()<s[j].getMarks()){
                swap(s[i],s[j]);
            }
        }
    } 
    cout<<"\nSorted data by marks\n";
    for(int i=0;i<n;i++)
        s[i].showData();
        
}
int main(){
    int n;
    cout<<"enter no of student :";
    cin>>n;
    student s[50];

    for(int i =0 ;i<n;i++){
        cout<<"\nEnter details of student "<<i+1<<":\n";
        s[i].getData();
    }
    student::sort(s,n);
    student::sort(s,n,1);

    return 0;
}
