
#ifndef BOOKS_H //Header Guard
#define BOOKS_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Books
{
public:
	//-----default constructor-----
	Books();
	
	//-----overloaded constructor-----
	Books(string, string, string, string, string);

	//-----DESTRUCTOR-----
	~Books();

	//-----Accessors-----
				//*const keyword indicates function does not modify any member data
	string getTitle() const; //----->returns title
	string getAuthor() const; //---->returns author
	int getCopyrightDate() const;//->returns copyright date
	char getBeenBanned() const;//->returns been banned?
	double getRating() const;//----->returns book rating.
	//-------------------------------------------------------------

			
	//-----Mutators-----
	string setTitle();  //----->userInput title
	string setAuthor(); //----->userInput author
	int setCopyrightDate();//----->userInput copyright date
	char setBeenBanned(); //----->userInput been banned?
	double setRating(); //----->userInput book rating.
	//-------------------------------------------------------------

private:
	//----------member data----------
	string title;
	string author;
	int copyrightDate;
	char beenBanned;
	double rating;
};

#endif // !BOOKS_H
