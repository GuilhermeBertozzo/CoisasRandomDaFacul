#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

void BuildField(char Field[20][31]);
int RandMove(char Field[20][31], int Px[5], int Py[5], char snake[5]);

int main(){

    srand(time(NULL));

    int Px[5] = {1, 1, 1, 1, 1}, Py[5] = {1, 2, 3, 4, 5};

    char snake[5] = {176, 177, 177, 177, 178};

    char Field[20][31];

    BuildField(Field);

    int i, j;

    for (i = 0; i < 5; i++){
        Field[Px[i]][Py[i]] = snake[i];
    }

    while (!kbhit()){

        system("cls");

        for (i = 0; i < 20; i++){
            for (j = 0; j < 30; j++){
                if (Field[i][j] == '0'){
                    printf("  ");
                }
                else{
                    printf("%c ", Field[i][j]);
                }
            }
            printf("\n");
        }

       if(!RandMove(Field, Px, Py, snake)){
           printf("Pressione qualquer tecla para encerrar\n");
           while(!kbhit()){}
           return 0;
        }
        Sleep(600);
    }
    return 0;
}

void BuildField(char Field[20][31]){
    FILE *FileName = fopen("obstaculos.txt", "r");
    if (FileName == NULL){
        return;
    }
    int i, j;
    for (i = 0; i < 20; i++){
        for (j = 0; j < 31; j++){
            fscanf(FileName, "%c", &Field[i][j]);
        }
    }
    fclose(FileName);
}

int RandMove(char Field[20][31], int Px[5], int Py[5], char snake[5]){
    int nx = Px[3], ny = Py[3];
    int i;
    Field[Px[0]][Py[0]] = '0';

    for (i = 0; i < 4; i++){
        Px[i] = Px[i + 1];
        Py[i] = Py[i + 1];
    }
    int valid = 0;
    int count = 0;
    while (!valid && count < 1000 ){
        int r = rand() % 8;
        switch (r){
        case 0:
            if (Field[Px[4] - 1][Py[4] - 1] != '1' && (Px[4] - 1 != nx || Py[4] - 1 != ny)){
                Px[4] = Px[4] - 1;
                Py[4] = Py[4] - 1;
                valid = 1;
            }

            break;
        case 1:
            if (Field[Px[4] - 1][Py[4]] != '1' && (Px[4] - 1  != nx || Py[4] != ny)){
                Px[4] = Px[4] - 1;
                valid = 1;
            }

            break;
        case 2:
            if (Field[Px[4] - 1][Py[4] + 1] != '1' && (Px[4] - 1 != nx || Py[4] + 1 != ny)){
                Px[4] = Px[4] - 1;
                Py[4] = Py[4] + 1;
                valid = 1;
            }
            break;

        case 3:
            if (Field[Px[4]][Py[4] - 1] != '1' && (Px[4]  != nx || Py[4] - 1 != ny)){
                Py[4] = Py[4] - 1;
                valid = 1;
            }

            break;
        case 4:
            if (Field[Px[4]][Py[4] + 1] != '1' && (Px[4]  != nx || Py[4] + 1 != ny)){
                Py[4] = Py[4] + 1;
                valid = 1;
            }

            break;
        case 5:
            if (Field[Px[4] + 1][Py[4] - 1] != '1' && (Px[4] + 1 != nx || Py[4] - 1!= ny)){
                Px[4] = Px[4] + 1;
                Py[4] = Py[4] - 1;
                valid = 1;
            }

            break;
        case 6:
            if (Field[Px[4] + 1][Py[4]] != '1' && (Px[4] + 1 != nx || Py[4] != ny)){
                Px[4] = Px[4] + 1;
                valid = 1;
            }
            break;
        case 7:
            if (Field[Px[4] + 1][Py[4] + 1] != '1' && (Px[4] + 1 != nx || Py[4] + 1 != ny)){
                Px[4] = Px[4] + 1;
                Py[4] = Py[4] + 1;
                valid = 1;
            }

            break;
        default:
            break;
        }
        count++;
    }
    if(count == 1000){
        printf("A cobrinha esta presa!\n");
        return 0;
    }
    for (i = 0; i < 5; i++){
        Field[Px[i]][Py[i]] = snake[i];
    }

    return 1;
}