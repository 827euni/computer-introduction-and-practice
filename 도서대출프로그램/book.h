#pragma once
struct DATE
{
	int day;
	int month;
	int year;
}typedef DATE;

struct BOOK
{
	int bookID;
	char bookName[20];
	DATE publicationDate;
	char publisherName[20];
	char publisherPhoneNumber[12];
	char authorName[20];
	char emailAddress[30];
}typedef BOOK;
