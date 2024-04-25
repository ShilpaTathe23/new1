//1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
//Accept data (acceptInfo()) and display  using display member function.
//Also display total,percentage and grade.
#include<iostream>
using namespace std;
class student
{
    int rollno;
    string name;
    float m1,m2,m3;
    float percentage;
    char grade;
    int total;
    void Total()
    {
        total=m1+m2+m3;
    }
    void calpercentage()
    {
        percentage=(total/300)*100;
    }
    void calgrade()
    {
        if( total>90&&total<100)
        {
            cout<<" grade A=A"<<endl;
        }
        else if( total>80&&total<90)
        {
            cout<<" grade B=B"<<endl;
        }
        else if( total>70&&total<60)
        {
            cout<<" grade c=c"<<endl;
        }
    };
    public:
    student()
    {
        rollno=10;
        name="tinku";
        m1=m2=m3=0;
        total=0;
    }
    student( int rollno,string name,float m1,float m2,float m3 )
    {
        this->rollno=rollno;
        this->name=name;
        this->m1=m1;
        this->m2=m2;
        this->m3=m3;
        this->total=total;
    }

    void display()
    {
        cout<<"rollno="<<rollno<<"\nname="<<name<<"\nm1="<<m1<<"\nm2="<<m2<<"\nm3="<<m3<<"\ntotal="<<total<<endl;
    }
};
int main()
{
    student s1;
    s1.display();
    student s2(102,"tinku",80,90,99);
    s2.display();
}