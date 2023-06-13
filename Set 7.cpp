#include<iostream>
#include<string.h>
using namespace std;

class A
{
    public:
  
  void get()
  {
  	cout<<"mother name is Bhavna Pandey "<<endl;
  	cout<<"age 52 "<<endl;
  }
  
};
class B:public A
{
	public:
		void display()
		{
			cout<<"daugter name Ananya Panday="<<endl;
			cout<<"age 24 "<<endl;
		}
};
int main()
{
	B d;
	d.display();
	
	cout<<"_______________________"<<endl;
	
	d.get();
	return 0;
}


