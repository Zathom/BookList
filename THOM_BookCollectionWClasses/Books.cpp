

#include"Books.h"

using namespace std;

Books::Books()
{
	//Books default constructor
	
}
	//overloaded constructor
Books::Books(string bookTitle, string bookAuthor, string bookCopyrightDate, string bookBeenBanned, string bookRating)
{
	string title = bookTitle;
	string author = bookAuthor;
	string copyrightDate = bookCopyrightDate;
	string beenBanned = bookBeenBanned;
	string rating = bookRating;
}//END BOOKS OVERLOAD CONSTRUCTOR

Books::~Books()
{

}//END BOOKS DESTRUCTOR

//------------------------------ACCESSORS------------------------------
string Books::getTitle() const
{
	return title;
}//end getTitle()-----------
string Books::getAuthor() const
{
	return author;
}//end getAuthor()----------
int Books::getCopyrightDate() const
{
	return copyrightDate;
}//end getCopyrightDate()----------
char Books::getBeenBanned() const
{
	return beenBanned;
}//end getBeenBanned()----------
double Books::getRating() const
{
	return rating;
}//end getRating()----------
//------------------------------END ACCESSORS------------------------------

//------------------------------MUTATORS------------------------------
string Books::setTitle()
{
	getline(cin, title);
	return title;
}//end setTitle()-----------
string Books::setAuthor()
{
	getline(cin, author);
	return author;
}//end setAuthor()----------
int Books::setCopyrightDate()
{
	cin >> copyrightDate;
	return copyrightDate;
}//end setCopyrightDate()----------
char Books::setBeenBanned()
{
	cin >> beenBanned;
	return beenBanned;
}//end setBeenBanned()----------
double Books::setRating()
{
	cin >> rating;
	return rating;
}//end setRating()----------