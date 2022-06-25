#include "myUtility.h"

void myFlush() {
	while (clean = getchar() != '\n' && clean != EOF);
}

int fileWriter(void* _Dest, size_t Size, int _Count, char* fileName) {

	FILE* fp = NULL;

	if (fopen_s(&fp, fileName, "wb") != 0)
		return 0;


	if (fwrite(_Dest, Size, _Count, fp) != _Count)
		return 0;

	fclose(fp);
	printf("Save Complete!\n");
	return 1;
}

int fileReader(void* _Dest, size_t Size, int _Count, char* fileName) {

	FILE* fp = NULL;

	if (fopen_s(&fp, fileName, "rb") != 0)
		return 0;

	if (fread(_Dest, Size, _Count, fp) != _Count)
		return 0;

	fclose(fp);
	printf("Load Complete!\n");
	return 1;
}