/*
	Разработайте программу «Библиотека». Создайте структуру «Книга» (название, автор,
	издательство, жанр). Создайте массив из 10 книг. Реализуйте для него следующие возможности:
	- Редактировать книгу
	- Печать всех книг
	- Поиск книг по автору
	- Поиск книги по названию
	- Сортировка массива по названию книг
	- Сортировка массива по автору
	- Сортировка массива по издательству
*/

#include <iostream>
using namespace std;
const int SIZE = 10;
struct Book
{
	string id;
	string title;
	string autor;
	string publishing;
	string genre;


	// вывод в консоль 
	void Print(Book arrBooks)
	{
		if (arrBooks.id )
		{
			cout.width(7);
			cout << "ID |" << " Название\t|" << " Автор\t\t|" << " Издательство\t|" << " Жанр\t\t|" << endl;
			for (int i = 0; i < 73; i++)
			{
				cout << "-";
			}
			cout << endl;
		}

		cout << arrBooks.id << " | ";
		cout << arrBooks.title << "\t\t| ";
		cout << arrBooks.autor << "\t\t| ";
		cout << arrBooks.publishing << "\t\t| ";
		cout << arrBooks.genre << "\t\t|" << endl;
		cout << endl;
	}

	// Изменение книги
	void EditBook(Book& book)
	{
		cout << "Введите название книги: "; cin >> title; cout << endl;
		book.title = title;
		cout << "Введите атора книги: "; cin >> autor; cout << endl;
		book.autor = autor;
		cout << "Введите издательство книги: "; cin >> publishing; cout << endl;
		book.publishing = publishing;
		cout << "Введите жанр книги: "; cin >> genre; cout << endl;
		book.genre = genre;
	}

	//Поиск книги по автору
	void SearchForABookByAutor(Book books[], string autor)
	{
		bool flag = true;

		cout << "Книги с указанным автором:" << endl << endl;

		for (int i = 0; i < SIZE; i++)
		{
			if (books[i].autor == autor)
			{
				if (i > 0 && i < 2)
				{
					cout.width(7);
					cout << "ID |" << " Название\t|" << " Автор\t\t|" << " Издательство\t|" << " Жанр\t\t|" << endl;
					for (int i = 0; i < 73; i++)
					{
						cout << "-";
					}
					cout << endl;
				}

				Print(books[i]);
				flag = false;
			}
		}

		if (flag)
		{
			cout << "Книги с указанным автором нет в базе." << endl;
		}

	}


	int main()
	{
		setlocale(LC_ALL, "ru");
		Book arrBooks[SIZE];
		Book books;
		srand(time(0));

		bool yesNo = true;
		int numMenu = 0;
		int temp;
		string tempStr;
		cout << "\t\tМЕНЮ" << endl;
		cout << "\t1. Печать всех книг; " << endl; // При необходимости можно организовать бесконечный массив данных.
		cout << "\t2. Редактировать книгу; " << endl;
		cout << "\t3. Поиск книг по автору; " << endl;
		cout << "\t4. Поиск книги по названию;" << endl;
		cout << "\t5. Сортировка массива по названию книг;" << endl;
		cout << "\t6. Сортировка массива по автору;" << endl;
		cout << "\t7. Сортировка массива по издательству;" << endl;
		cout << "\t8. Выход." << endl; cout << endl;

		cout << "\tВведите номер меню: "; cin >> numMenu; cout << endl;

		if (numMenu == 1)
		{
			for (Book number : arrBooks)
			{
				books.Print(number);
			}

			cout << endl;
			cout << "Нажми любую кнопку для возврата к меню.";
			system("pause>null");
			system("cls");
		}
		if (numMenu == 2)
		{
			cout << "Книги в базе: " << endl;
			for (Book number : arrBooks)
			{
				books.Print(number);
			}
			cout << endl;

			cout << "Введите номер id книги для изменения: "; cin >> temp;

			if (temp > 0 || temp <= 10)
			{
				books.EditBook(arrBooks[temp - 1]);
			}
			else
			{
				cout << "Книги с таким Id нет в базе." << endl;
			}

			cout << endl;
			cout << "Нажми любую кнопку для возврата к меню.";
			system("pause>null");
			system("cls");
		}
		if (numMenu == 3)
		{
			cout << "Введите автора: "; cin >> tempStr;

			books.SearchForABookByAutor(arrBooks, tempStr);

			cout << endl;
			cout << "Нажми любую кнопку для возврата к меню.";
			system("pause>null");
			system("cls");
		}
	}
};