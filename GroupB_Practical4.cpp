#include<iostream>
#include<fstream>
using namespace std;
class Student
{
	char name[25];
	int roll_no;

public:

void accept()
{
	fstream f;
	f.open("stud.txt",ios::app);
	if(!f)
		cout<<"File Creation Failed";
	else
	{
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter Roll No.: ";
		cin>>roll_no;
		f<<name<<" ";
		f<<roll_no<<"\n";
		f.close();
	
	}
}
void display()
{
	fstream f;
	f.open("stud.txt",ios::in);
	if(!f)
		cout<<"NO SUCH FILE";
	else
	{
		while(!f.eof())
		{
			f>>name;
			f>>roll_no;
			cout<<"\n";
	  	}
	
	
	}
	}
};

int main(){
	Student p;
	int limit;
	
	cout<<"Enter No. of Students: ";
	cin>>limit;
	
	for(int i=0;i<limit;i++)
	{
	p.accept();
	p.display();
	}
	return 0;
}
