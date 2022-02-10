#pragma warning(disable:4996)

#include <stdio.h>
#include <string.h>
#include <conio.h>

/*
    Source by GeeksForGeeks
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    FILE* filePointer;
    char dataToBeWritten[50] = "Kalimat ini hanya tes dan percobaan";

    filePointer = fopen("TestBelajar.c", "w");

    if (filePointer == NULL) {
        printf("TestBelajar.c file failed to open.");
    } else {

        printf("The file is now opened.\n");

        if (strlen(dataToBeWritten) > 0) {
            fputs(dataToBeWritten, filePointer);
            fputs("\n", filePointer);
        }

        fclose(filePointer);

        printf("Data successfully written in file TestBelajar.c\n");
        printf("The file is now closed.");
    }

    _getch();
    return 0;
}