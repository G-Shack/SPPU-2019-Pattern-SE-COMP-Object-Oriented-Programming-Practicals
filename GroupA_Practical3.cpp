#include <iostream>
using namespace std;

class publication
{

	string Title;
	float Price;

public:
	void set_p()
	{
		cout << "Enter the title: " << endl;
		cin >> Title;
		cout << "Enter the price: " << endl;
		cin >> Price;
	}
	void display_p()
	{
		cout << "Title: " << Title << endl
			 << "Price: " << Price << endl;
	}
};
class book : public publication
{
	int pages;

public:
	void getpages()
	{
		cout<<"Enter the information of book"<<endl;
		set_p();
		cout << "Enter the pages of book: " << endl;
		cin >> pages;
	if(pages<0){

		try
		{
	if(pages<0)
 	throw pages;}
 	catch(int f)
 	{
 		cout<<"\n error: pages not valid :"<<f<<endl;
 	pages=0;
 }
		cout<<"Pages Are :"<<pages<<endl;
	}
	else{
		display_p();
		cout<<"Pages Are :"<<pages<<endl;
	}
		cout<<"Enter the information of Tape:"<<endl;
}

	};


class tape : public publication
{
	float minutes;

public:
	void getminutes()
	{
		set_p();
		cout << "Enter Minutes: " << endl;
		cin >> minutes;
	if(minutes<0.0)
	{
		try
		{
			if(minutes<0.0)
			throw minutes;
		}
		catch(float r)
		{
			cout<<"\n Error: Invalid Playtime : "<<minutes;
			minutes=0.0;
		}
		cout<<"\n Playtime of tape is : "<<minutes;
	}
	else
	{
		display_p();
		cout<<"Playtime of tape is : "<<minutes;
	}
	}
};
int main()
{
	book b;
	b.getpages();

	tape t;
	t.getminutes();
	return 0;
}
