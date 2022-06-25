#include "book.h"
#include "bookDB.h"
#include "myUtility.h"



int add(BOOK* booklist, int bookID, int day, int month, int year, int* nth) {

	int i;
	for (i = 0; i < 100; i++) {
		printf("Enter Book ID : ");
		scanf_s("%d", booklist[i].bookID, sizeof(booklist[i].bookID));
		printf("Enter Book Name : ");
		scanf_s("%c", booklist[i].bookName, sizeof(booklist[i].bookName));
		printf("Enter publicationDate: enter ex>day.month.year: ");
		scanf_s("%d %d %d", day, month, year);
		printf("Enter publisherName : ");
		scanf_s("%c", booklist[i].publisherName, sizeof(booklist[i].publisherName));
		printf("Enter publisherPhoneNumber : ");
		scanf_s("%d", booklist[i].publisherPhoneNumber, sizeof(booklist[i].publisherPhoneNumber));
		printf("Enter authorName : ");
		scanf_s("%c", booklist[i].authorName, sizeof(booklist[i].authorName));
		printf("Enter emailAddressAddress : ");
		scanf_s("%c", booklist[i].emailAddress, sizeof(booklist[i].emailAddress));
		i++;
	}


	return 0;
}

int search(BOOK* booklist, int bookID, int day, int month, int year, int num) {

	int i;
	int usersearch;
	int num = 0;

	printf("Enter Book ID to search: \n");
	scanf_s("%d", usersearch);

	for (i = 0; i < num; i++) {
		if (strcmp(booklist[i].bookID, usersearch) >= 0) {
			printf("Found!\n");
			printf("search result: ");
			printf("Book bookID : %d \n", booklist[i].bookID);
			printf("Book bookName : %c \n", booklist[i].bookName);
			printf("Book publicationDate : %d. %d. %d \n", day, month, year);
			printf("Book publisherName : %c \n", booklist[i].publisherName);
			printf("Book publisherPhoneNumber : %d \n", booklist[i].publisherPhoneNumber);
			printf("Book author : %c \n", booklist[i].authorName);
			printf("Book emailAddressAddress : %c \n", booklist[i].emailAddress);
		}

		else printf("Cannot Found\n");

		return 0;

	}
}

int save(BOOK* booklist, int num) {
	FILE* fp;
	errno_t err = fopen_s(&fp, "BOOKLIST.txt", "W");
	if (err == 0) {
		printf("Save complete!");
		printf("Save count : %d", num);
		printf("Save complete!");
	}
	fprintf(fp, "%d\n", num);
	for (int i = 0; i < num; i++) {
		fprintf(fp, "%s / %s / %d.%d.%d / %s / %s / %s / %s", bookID, booklist[i].bookName, day, month, year, booklist[i].publisherName, booklist[i].publisherPhoneNumber, booklist[i].authorName, booklist[i].emailAddress);
	}

	fclose(fp);
	return 0;
}

int retrieve(BOOK** booklist, int num) {
	FILE* fp;
	errno_t err = fopen_s(&fp, "BOOKLIST.txt", "r");
	int total;
	if (err == 0) {
		printf("Load end");
	}

	fscanf_s(fp, "%d", &total);
	num = total;

	free(*booklist);
	(*booklist) = (BOOK*)malloc(sizeof(BOOK) * total);

	for (int i = 0; i < total; i++) {
		fscanf_s(fp, "%s", bookID, sizeof(bookID));
		fscanf_s(fp, "%s", (*booklist[i]).bookName, sizeof((*booklist[i]).bookName));
		fscanf_s(fp, "%d. %d. %d", day, month, year);
		fscanf_s(fp, "%s", (*booklist[i]).publisherName, sizeof((*booklist[i]).publisherName));
		fscanf_s(fp, "%s", (*booklist[i]).publisherPhoneNumber, sizeof((*booklist[i]).publisherPhoneNumber));
		fscanf_s(fp, "%s", (*booklist[i]).authorName, sizeof((*booklist[i]).authorName));
		fscanf_s(fp, "%s", (*booklist[i]).emailAddress, sizeof((*booklist[i]).emailAddress));
	}
	return 0;
}

int update(BOOK* booklist, int bookID, int day, int month, int year, int num) {

	int a, b, c, d, e, f, g, updatechoice;
	int i;

	printf("Enter Book Id to update: \n");
	scanf_s("%d", &updatechoice);

	for (i = 0; i < num; i++) {

		if (strcmp(booklist[i].bookID, updatechoice) = 0) {
			printf("Found!");

			while (1) {
				printf("Do you want to change Book id? (yes:1, no: 0): \n");
				scanf_s("%d", &a);
				printf("Do you want to change Book name? (yes:1, no: 0): \n");
				scanf_s("%d", &b);
				printf("Do you want to change Book date? (yes:1, no: 0): \n");
				scanf_s("%d", &c);
				printf("Do you want to change Book p name? (yes:1, no: 0): \n");
				scanf_s("%d", &d);
				printf("Do you want to change Book p phone? (yes:1, no: 0): \n");
				scanf_s("%d", &e);
				printf("Do you want to change Book author? (yes:1, no: 0): \n");
				scanf_s("%d", &f);
				printf("Do you want to change Book email? (yes:1, no: 0): \n");
				scanf_s("%d", &g);

				if (a == 1) {
					printf("Enter Book Id: \n");
					scanf_s("%s", bookID);
				}
				if (b == 1) {
					printf("Enter Book name: \n");
					scanf_s("%s", booklist[i].bookName);
				}
				if (c == 1) {
					printf("Enter Book date: \n");
					scanf_s("%d. %d. %d", day, month, year);
				}
				if (d == 1) {
					printf("Enter Book p name: \n");
					scanf_s("%s", booklist[i].publisherName);
				}
				if (e == 1) {
					printf("Enter Book p phone: \n");
					scanf_s("%s", booklist[i].publisherPhoneNumber);
				}
				if (f == 1) {
					printf("Enter Book author: \n");
					scanf_s("%s", booklist[i].authorName);
				}
				if (g == 1) {
					printf("Enter Book email: \n");
					scanf_s("%s", booklist[i].emailAddress);
				}

				else {
					break;
				}




			}
		}
	}

}

int checkauth(BOOK* booklist, int bookID, int day, int month, int year, int* nth){


	char a[30];
	int i;
	printf("Enter author: \n");
	scanf_s("%s", a);

	for (i = 0; i < num; i++) {

		if (strcmp(a, booklist[i].authorName) == 0) {
			printf("Book bookID : %d \n", booklist[i].bookID);
			printf("Book bookName : %c \n", booklist[i].bookName);
			printf("Book publicationDate : %d. %d. %d \n", day, month, year);
			printf("Book publisherName : %c \n", booklist[i].publisherName);
			printf("Book publisherPhoneNumber : %d \n", booklist[i].publisherPhoneNumber);
			printf("Book author : %c \n", booklist[i].authorName);
			printf("Book emailAddressAddress : %c \n", booklist[i].emailAddress);
		}

	}
}

int checkpubl(BOOK* booklist, int bookID, int day, int month, int year, int* nth){

	char a[30];
	int i;
	printf("Enter publisterPhoneNumber to display: \n");
	scanf_s("%s", a);

	for (i = 0; i < num; i++) {

		if (strcmp(a, booklist[i].publisherPhoneNumber) == 0) {
			printf("Book bookID : %d \n", booklist[i].bookID);
			printf("Book bookName : %c \n", booklist[i].bookName);
			printf("Book publicationDate : %d. %d. %d \n", day, month, year);
			printf("Book publisherName : %c \n", booklist[i].publisherName);
			printf("Book publisherPhoneNumber : %d \n", booklist[i].publisherPhoneNumber);
			printf("Book author : %c \n", booklist[i].authorName);
			printf("Book emailAddressAddress : %c \n", booklist[i].emailAddress);
		}

	}

}

int checkall(BOOK* booklist, int bookID, int day, int month, int year, int* nth) {

	int i;
	for (i = 0; i < num; i++) {
		printf("print All date:");
		printf("current : ");
		printf("%d", num);
		printf("\n");
		printf("Book bookID : %d \n", booklist[i].bookID);
		printf("Book bookName : %c \n", booklist[i].bookName);
		printf("Book publicationDate : %d. %d. %d \n", day, month, year);
		printf("Book publisherName : %c \n", booklist[i].publisherName);
		printf("Book publisherPhoneNumber : %d \n", booklist[i].publisherPhoneNumber);
		printf("Book author : %c \n", booklist[i].authorName);
		printf("Book emailAddressAddress : %c \n", booklist[i].emailAddress);



	}
}

int delete(BOOK* booklist, int bookID, int day, int month, int year, int* nth) {


}