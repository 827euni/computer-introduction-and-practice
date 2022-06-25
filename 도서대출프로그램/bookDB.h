#pragma once
#include "book.h"
#include "bookDB.h"
#include "myUtility.h"


int choice;
char bookName[100][20], authorName[100][20], publisherName[100][20], emailAddress[100][30], publisherPhoneNumber[100][12];
int month, year, day;
int bookID;
int num = 0;
BOOK* booklist;
booklist = (BOOK*)mallc(sizeof(BOOK) *choice);

int add(BOOK* booklist, int bookID, int day, int month, int year, int* nth);

int update(BOOK* booklist, int bookID, int day, int month, int year, int num);

int delete(BOOK* booklist, int bookID, int day, int month, int year, int* nth);

int search(BOOK* booklist, int bookID, int day, int month, int year, int num);

int save(BOOK* booklist, int num);

int checkauth(BOOK* booklist, int bookID, int day, int month, int year, int* nth);

int checkpubl(BOOK* booklist, int bookID, int day, int month, int year, int* nth);

int checkall(BOOK* booklist, int bookID, int day, int month, int year, int* nth);

int retrieve(BOOK** booklist, int num);

