#include<iostream.h>
#include<conio.h>
class demo1
{
int data1,data2,*p;
public:
demo1()
{
p=new int;
}
demo1(demo1 &d)
{
data1=d.data1;
data2=d.data2;
p=new int;
*p=*(d.p);
}
void getdata(int a,int b,int c)
{
data1=a;
data2=b;
*p=c;
}
void showdata()
{
cout<<"data 1= "<<data1<<endl<<"data 2= "<<data2<<endl<<"*p = "<<*p<<endl;
}
};
int main()
{
clrscr();
demo1 obj1;
obj1.getdata(10,20,30);
obj1.showdata();
demo1 obj2=obj1;
obj2.showdata();
return 0;
}