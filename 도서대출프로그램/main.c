#include <stdio.h>

int add(char(*bookName)[20], char(*authorName[20]), char(*publisherName[20]),
	char(*emailAddress[30]), int day, int month, int year, int bookID, char publisherPhoneNumber[12], int* num);

int update(char(*bookName)[20], char(*authorName[20]), char(*publisherName[20]),
	char(*emailAddress[30]), int day, int month, int year, int bookID, char publisherPhoneNumber[12], int* num);


int delete(char(*bookName)[20], char(*authorName[20]), char(*publisherName[20]),
	char(*emailAddress[30]), int day, int month, int year, int bookID, char publisherPhoneNumber[12], int* num);


int search(char(*bookName)[20], char(*authorName[20]), char(*publisherName[20]),
	char(*emailAddress[30]), int day, int month, int year, int bookID, char publisherPhoneNumber[12], int num);

char compare_string(char* s1, char* s2);


int main(void) {

	int choice;
	char bookName[100][20], authorName[100][20], publisherName[100][20], emailAddress[100][30], publisherPhoneNumber[100][12];
	int month, year, day;
	int bookID;
	int num = 0;




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
			add(bookName, authorName, publisherName, emailAddress, day, month, year, bookID, publisherPhoneNumber, num);
			break;
		}


		else if (choice == 2) {
			update(bookName, authorName, publisherName, emailAddress, day, month, year, bookID, publisherPhoneNumber, num);
			break;
		}

		else if (choice == 3) {
			delete(bookName, authorName, publisherName, emailAddress, day, month, year, bookID, publisherPhoneNumber, num);
			break;
		}

		else if (choice == 4) {
			search(bookName, authorName, publisherName, emailAddress, day, month, year, bookID, publisherPhoneNumber, num);
			break;
		}

		else if (choice == 5) {
			break;
		}
		else if (choice == 6) {
			break;
		}
		else if (choice == 7) {
			break;
		}
		else if (choice == 8) {
			break;
		}
		else if (choice == 9) {
			break;
		}

	}

}



	int add(char(*bookName)[20], char(*authorName[20]), char(*publisherName[20]),
		char(*emailAddress[30]), int day, int month, int year, int bookID, char publisherPhoneNumber[12], int* num)
	{

		printf("Enter Book ID : ");
		scanf_s("%d", bookID);
		printf("Enter Book Name : ");
		scanf_s("%c", bookName);
		printf("Enter publicationDate: enter ex>day.month.year: ");
		scanf_s("%d %d %d", day, month, year);
		printf("Enter publisherName : ");
		scanf_s("%c", publisherName);
		printf("Enter publisherPhoneNumber : ");
		scanf_s("%d", publisherPhoneNumber);
		printf("Enter authorName : ");
		scanf_s("%c", authorName);
		printf("Enter emailAddressAddress : ");
		scanf_s("%c", emailAddress);
		num++;


		return 0;
	}

	char compare_string(char* s1, char* s2) {
		while (*s1) {
			if (*s1 != *s2) {
				return 0;
			}
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return 1;
	}

	int search(char(*bookName)[20], char(*authorName[20]), char(*publisherName[20]),
		char(*emailAddress[30]), int day, int month, int year, int bookID, char publisherPhoneNumber[12], int num);


		int k;
		int usersearch;

		printf("Enter Book ID to search: \n");
		scanf_s("%d", &usersearch);

		for (k = 0; k < num; k++) {
			if (compare_string(bookID, usersearch)) {
				printf("Found!\n");
				printf("search result: ");
				printf("Book bookID : %d \n", bookID);
				printf("Book bookName : %c \n", bookName[k]);
				printf("Book publicationDate : %d. %d. %d \n", day, month, year);
				printf("Book publisherName : %c \n", publisherName[k]);
				printf("Book publisherPhoneNumber : %d \n", publisherPhoneNumber[k]);
				printf("Book author : %c \n", authorName[k]);
				printf("Book emailAddressAddress : %c \n", emailAddress[k]);
			}

			else (k == num) {
				printf("Cannot Found\n");
			}

			return 0;
		
	}



