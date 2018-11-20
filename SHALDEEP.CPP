#include<iostream.h>
#include<conio.h>
class shallowc
{
int *x;
public:
shalloc(int m)
{
x=new int;
*x=m;
}
shalloc(shallowc &obj)
{
x=new int ;
*x=obj.Getx();
}
int Getx() const
{
return *x;
}
void Setx(int m)
{
*x=m;
}
void printx()
{
cout<<"int x= "<<*x<<endl;
}
~shallowc()
{
delete x;
}
};
int main()
{
clrscr();
shallowc ob1;
ob1.Setx(10);
shallowc ob2=ob1;
ob1.printx();
ob2.printx();
ob1.Setx(12);
ob1.printx();
ob2.printx();
getch();
}