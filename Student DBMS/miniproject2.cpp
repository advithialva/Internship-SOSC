//Student Database Management Sysytem//
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    string usn;

void nameandusn(){
    cin>>name>>usn;
}
void displaynameandusn(){
    cout<<name<<":"<<usn;
}
float calcmarks(int a,int b, int c);
bool pf(float d){
    if(d>=40.00)
    return true;
    else
    return false;
}

void entranceexam();
};
float Student::calcmarks(int a,int b,int c){
    float percentage=((a+b+c)/3);
    cout<<"The marks are :"<<a<<" "<<b<<" "<<c<<endl;
    return percentage;
}

void Student::entranceexam(){
    int rank;
    cin>>rank;
    if(rank>=5000 && rank<=15000){
        cout<<"Student is alloted to CS";
    }
    else if(rank>15000 && rank<=25000){
        cout<<"Student is alloted to IS";
    }
    else if(rank>25000 && rank<=35000){
        cout<<"Student is alloted to IS";
    }
}

int main(){
    Student s;

    cout<<"Welcome to SDBMS\n";
    int number=2;
    while(number--)
    {
        cout<<"\nEnter the student name and usn : \n";
        s.nameandusn();
        s.displaynameandusn();
        cout<<"\nEnter  the marks of 3 subjects\n";
        int m1,m2,m3;
        cin>>m1>>m2>>m3;
        float res=s.calcmarks(m1,m2,m3);
        if(s.pf(res))
        cout<<"Pass"<<" "<<"Percentage is :"<<" "<<res<<endl;
        else
        cout<<"Fail\n";
        cout<<"Enter the entrance exam rank:\n";
        s.entranceexam();
    }
    return 0;
}