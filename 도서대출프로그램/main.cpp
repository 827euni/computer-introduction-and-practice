#include "book.h"
#include "bookDB.h"
#include "myUtility.h"

int main() {

	int choice;
	char bookName[100][20], authorName[100][20], publisherName[100][20], emailAddress[100][30], publisherPhoneNumber[100][12];
	int month, year, day;
	int bookID;
	int num = 0;
	BOOK* booklist;
	booklist = (BOOK*)mallc(sizeof(BOOK) * choice);





	while (1) {
		printf("------------------------------------------------------------\n");
		printf("0. Exit program\n");
		printf("1. Add book information\n");
		printf("2. Update book information\n");
		printf("3. Delete book information\n");
		printf("4. Search book information\n");
		printf("5. Display a list of book(s) published by an author\n");
		printf("6. Display a list of book(s) published by a publisher\n");
		printf("7. Display a list of all book\n");
		printf("8. Load Data\n");
		printf("9. Save Data\n");
		printf("------------------------------------------------------------\n");
		printf("Selection? : ");

		scanf_s("%d", &choice);

		if (choice == 0) {
			break;
		}

		else if (choice == 1) {
			add(BOOK * booklist, int bookID, int day, int month, int year, int* nth);
			break;
		}


		else if (choice == 2) {
			update((BOOK * booklist, int bookID, int day, int month, int year, int* nth);
			break;
		}

		else if (choice == 3) {
			delete((BOOK * booklist, int bookID, int day, int month, int year, int* nth);
			break;
		}

		else if (choice == 4) {
			search((BOOK * booklist, int bookID, int day, int month, int year, int num);
			break;
		}

		else if (choice == 5) {
			checkauth(BOOK * booklist, int bookID, int day, int month, int year, int* nth);

			break;
		}
		else if (choice == 6) {
			checkpubl(BOOK * booklist, int bookID, int day, int month, int year, int* nth);
			break;
		}
		else if (choice == 7) {
			checkall(BOOK * booklist, int bookID, int day, int month, int year, int* nth);
			break;
		}
		else if (choice == 8) {
			fileReader(void* _Dest, size_t Size, int _Count, char* fileName);
			break;
		}
		else if (choice == 9) {
			fileWriter(void* _Dest, size_t Size, int _Count, char* fileName);
			break;
		}

	}

}





