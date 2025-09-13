#include <stdio.h>

int main() {
    int tabuleiroNovato[5][5] = {0};

    int x_vertical = 1, y_vertical = 2, tamanho_vertical = 3;
    for (int i = 0; i < tamanho_vertical; i++) {
        tabuleiroNovato[x_vertical + i][y_vertical] = 3;
    }

    int x_horizontal = 3, y_horizontal = 0, tamanho_horizontal = 4;
    for (int j = 0; j < tamanho_horizontal; j++) {
        tabuleiroNovato[x_horizontal][y_horizontal + j] = 3;
    }

    printf("=== Batalha Naval - Nivel Novato ===\n\n");

    printf("Navio Vertical (coordenadas):\n");
    for (int i = 0; i < tamanho_vertical; i++) {
        printf("(%d, %d)\n", x_vertical + i, y_vertical);
    }

    printf("\nNavio Horizontal (coordenadas):\n");
    for (int j = 0; j < tamanho_horizontal; j++) {
        printf("(%d, %d)\n", x_horizontal, y_horizontal + j);
    }

    int tabuleiroAventureiro[10][10] = {0}; 

    for (int i = 0; i < 5; i++) {
        tabuleiroAventureiro[1 + i][2] = 3;
    }
    for (int j = 0; j < 4; j++) {
        tabuleiroAventureiro[6][3 + j] = 3;
    }
    for (int k = 0; k < 5; k++) {
        tabuleiroAventureiro[2 + k][2 + k] = 3;
    }

    for (int k = 0; k < 4; k++) {
        tabuleiroAventureiro[8 - k][1 + k] = 3;
    }

    printf("\n\n=== Batalha Naval - Nivel Aventureiro ===\n\n");
    printf("Tabuleiro 10x10 (0 = vazio, 3 = navio):\n\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiroAventureiro[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n=== Batalha Naval - Nivel Mestre ===\n\n");

    int cone[5][5] = {0};
    for (int i = 0; i < 3; i++) { 
        for (int j = 2 - i; j <= 2 + i; j++) {
            if (j >= 0 && j < 5) {
                cone[i][j] = 1;
            }
        }
    }

    printf("Habilidade: Cone\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int octaedro[5][5] = {0};
    octaedro[0][2] = 1;
    octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    octaedro[2][2] = 1;
    octaedro[3][2] = 1;
    octaedro[4][2] = 1;

    printf("Habilidade: Octaedro\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int cruz[5][5] = {0};
    for (int i = 0; i < 5; i++) {
        cruz[2][i] = 1; 
        cruz[i][2] = 1;
    }

    printf("Habilidade: Cruz\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
