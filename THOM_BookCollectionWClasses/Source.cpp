#include"FunctionsMAIN.h"

using namespace std;

int main()
{
	//string title = "xyz";
	//string author = "xyz";
	//int copyrightDate = 0;
	//double rating = 0.00;
	//char beenBanned = 'x';
	char choice = 'x';
	char yOrN = 'x';
	
	vector<Books> bookList;

	

	do
	{
		choice = bookMenu();
		if (choice == '1')
		{
			addBook(bookList);
		}//END IF CHOICE 1----------
		else if (choice == '2')
		{
			removeBook(bookList);
		}//END IF CHOICE 1----------
		else if (choice == '3')
		{
			displayBooks(bookList);
		}//END IF CHOICE 1----------
		else if (choice == '4')
		{
			cout << "not supported";
		}//END IF CHOICE 1----------
	} while(yOrN != '4');

	system("pause");
	return 0;
}