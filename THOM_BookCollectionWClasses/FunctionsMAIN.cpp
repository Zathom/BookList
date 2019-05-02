using namespace std;
#include "Books.h"
#include"FunctionsMAIN.h"
#include <vector>
#include <fstream>


char bookMenu()
{
	/*
	ABSTRACT-
	Displays program operations menu and enables navigation of program functions.
	returns a character to be used in main function.
	*/
	char choice = 'x';
	cout << endl << "Choose from the following: " << endl;
	cout << "1. Add a book. " << endl;
	cout << "2. Remove a book. " << endl;
	cout << "3. Display all books. " << endl;
	cout << "4. Save books. " << endl;
	cin >> choice;
	cin.ignore();

	return choice;
} // END BOOK MENU FUNCTION--------------------------------------------------------------------

void addBook(vector<Books>& bookList)
{
	int bookQuantity = 0;
	string title;
	string author;
	string copyrightDate;
	string beenBanned;
	string rating;
	cout << "How many books do you want to add? ";
	cin >> bookQuantity;
	//stoi

	for (int x = 0; x < bookQuantity; x++)
	{
		cout << "Enter book title: ";
		getline(cin, title);
		cout << endl <<"Who is the author of the book?";
		getline(cin, author);
		cout << "What year was the book copyrighted?";
		getline(cin, copyrightDate);
		cout << "Has the book ever been banned? enter 'Y' or 'N'";
		getline(cin, beenBanned);
		cout << "How has the book been rated by critics? Enter a fractional number (ex 4.25):";
		getline(cin, rating);
		
		
		bookList.push_back(*newBook);
	}
}//END ADD BOOK FUNCTION-------------------------------------------------------------------------

void displayBooks(vector<Books>& bookList)
{
	/*
	ABSTRACT-
	Displays bookList vector
	returns nothing.
	*/



	for (int x = 0; x < bookList.size(); x++)
	{
		cout << "Listed book number: " << x;
		cout << "\t\tTitle: " << bookList[x].getTitle() << endl
			<< " \t\t\t Author: " << bookList[x].getAuthor() << endl
			<< " \t\t\t Copyright year:" << bookList[x].getCopyrightDate() << endl
			<< " \t\t\t Been banned?: " << bookList[x].getBeenBanned() << endl
			<< " \t\t\t Critic rating: " << bookList[x].getRating() << endl;
	}// END FOR-----------------------------------------------------------
}//END DISPLAY BOOKS FUNCTION-----------------------------------------------------------

void removeBook(vector<Books>& bookList)
{
	/*
	ABSTRACT-
	Removes a book title from vector.
	*/
	int bookNumber;
	cout << " Enter the number that corresponds to the title you " << endl
		<< " want to remove from the list. \n ========================================" << endl;
	displayBooks(bookList);
	cout << "\n ========================================" << endl;

	cin >> bookNumber;
	bookList.erase(bookList.begin() + bookNumber);
}//END REMOVE BOOK--------------------------------------------------------------------




void saveBooks(vector<Books>& bookList, fstream& bookFile)
{
	int vectorIndex = 0;
	alphabetize(bookList);
	vector<Books>::iterator stdItr;
	bookFile.open("bookArchive.txt", ios::out | ios::app); // APP ENSURES YOUR WRITING TO THE END
	for (stdItr = bookList.begin(); stdItr != bookList.end(); stdItr++)
	{
		for (int count = 1; count < 5; count++)
		{
			if (count == 1)
			{
				bookFile << bookList[vectorIndex].getTitle() << "\n" << "\t";
			}//END ADD TITLE TO FILE IF-----
			if (count == 2)
			{
				bookFile << bookList[vectorIndex].getAuthor() << "\n" << "\t";
			}// END ADD AUTHOR IF-----
			if (count == 3)
			{
				bookFile << bookList[vectorIndex].getCopyrightDate() << "\n" << "\t";
			}//END ADD COPYRIGHT IF-----
			if (count == 4)
			{
				bookFile << bookList[vectorIndex].getBeenBanned() << "\n" << "\t";
			}//END ADD BEEN BANNED IF-----
			if (count == 5)
			{
				bookFile << bookList[vectorIndex].getRating() << "\n" << "====================";
			}
			vectorIndex++;
		}//END ADD BOOK PROPERTIES FOR -----
	}//END FOR--------------------------------------------------------------
	bookFile.close();

	cout << " Book list file saved successfully! \n:) " << endl;



	//Pseudo-Implementation
	//While not at end of data to save
	//{
	//	for (i to 3)
	//	{
	//		if (i == 1) then save title
	//		if (i == 2) then save author
	//		if (i == 3) then save date
	//	}
	//}

	//Harry Potter
	//Jk Rowling
	//1997
	//Alechmy101
	//...
}

// END SAVEBOOKS FUNCTION--------------------------------------------------------------------

vector<Books> alphabetize(vector<Books>& bookList)
{




	return bookList;
}//END ALPHABETIZE FUNCTION-----------------------------------------------------------------------

bool titleFlag(const Books & b1, const Books & b2)
{

	if (b1.getTitle() != b2.getTitle()) { return b1.getTitle() < b2.getTitle(); }
	return b1.getAuthor() < b2.getAuthor();
}