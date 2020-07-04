#include "Library.h"

void Library::add_employee(string name) { // Creates a new employee and adds the to the vector
	Employee curr_employee(name);
	employees.push_back(curr_employee);
}

void Library::add_book(string name) { // Creates a new book and adds it to the book vector
	Book curr_book(name);
	books.push_back(curr_book);

}
void circulate_book(string book_name, Date circ_date) { 

	int ind = find_ind(book_name, books);
	if (ind == -1) {
		cout << book_name << " does not exist " << endl;
	}
	else {
		Book* curr_book = books[ind];

	}
}
void pass_on(string book_name, Date pass_date) {

}
template <typename type>
int find_ind(string name, vector<type> vec) { // returns index of book or employee
	for (int x = 0; x < vec.size(); x++) {
		if (vec.at(x).get_name() == name) {
			return x;
		}
	}

	return -1;
} 