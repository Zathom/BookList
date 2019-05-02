#ifndef FunctionsMAIN_H	 //---------- Header guard
#define FunctionsMAIN_H

#include"Books.h"

vector<Books> alphabetize(vector<Books>& bookList);
void removeBook(vector<Books>& bookList);
void displayBooks(vector<Books>& bookList);
void addBook(vector<Books>& bookList);
char bookMenu();

#endif