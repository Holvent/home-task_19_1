#include <iostream>
#include <string>
#include <ctime>
using namespace std;

const int SIZE = 10;
struct book
{
	int id;
	int title;
	int autor;
	int publishing;
	int genre;

	void EnteringArray(book arrBooks[]);
	void Print(book arrBooks);
};
// Заполнение массива для тестов чтоб не вводить каждый раз.
void EnteringArray(book arrBooks[]) {
	for (int i = 0; i < SIZE; i++)
	{
		arrBooks[i].id = (i + 1);
		arrBooks[i].title = rand() % 10;
		arrBooks[i].autor = rand() % 10;
		arrBooks[i].publishing = rand() % 10;
		arrBooks[i].genre = rand() % 10;
	}
}
void Print(book arrBooks) {
	if (arrBooks.id == 1){
		cout << "ID |" << " Название\t|" << " Автор\t\t|" << " Издательство\t|" << " Жанр\t\t|" << endl;
	}
	cout << arrBooks.id << " | ";
	cout << arrBooks.title << " | ";
	cout << arrBooks.autor << " | ";
	cout << arrBooks.publishing << " | ";
	cout << arrBooks.genre << " |\n\n";


}
int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));
	book arrBooks[SIZE];
	book books;
	int numMenu = 0;
	// Заполнение массива
	books.EnteringArray(arrBooks);
	do
	{
		cout << "\t\tМЕНЮ" << endl
			<< "1. Печать всех книг; " << endl
			<< "2. Редактировать книгу; " << endl
			<< "3. Поиск книг по автору; " << endl
			<< "4. Поиск книги по названию;" << endl
			<< "5. Сортировка массива по названию книг;" << endl
			<< "6. Сортировка массива по автору;" << endl
			<< "7. Сортировка массива по издательству;" << endl
			<< "8. Выход.\n\n";

		cout << "\tВведите номер меню: ";
		cin >> numMenu; 
		cout << endl;
	}
