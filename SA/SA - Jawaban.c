#include <stdio.h>

void moveUp(char angkasa[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (angkasa[i][j] == '*') {
                if (i > 0 && angkasa[i - 1][j] != 'o' && angkasa[i - 1][j] == '.') {
                    angkasa[i - 1][j] = '*';
                    angkasa[i][j] = '.';
                } else if (angkasa[i - 1][j] == '*') {
                    angkasa[i - 1][j] = '.';
                    angkasa[i][j] = '.';
                }
            }
        }
    }
}

void moveDown(char angkasa[][100], int n, int m) {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < m; j++) {
            if (angkasa[i][j] == '*') {
                if (i < n - 1 && angkasa[i + 1][j] != 'o' && angkasa[i + 1][j] == '.') {
                    angkasa[i + 1][j] = '*';
                    angkasa[i][j] = '.';
                } else if (angkasa[i + 1][j] == '*') {
                    angkasa[i + 1][j] = '.';
                    angkasa[i][j] = '.';
                }
            }
        }
    }
}

void moveRight(char angkasa[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = m - 1; j >= 0; j--) {
            if (angkasa[i][j] == '*') {
                if (j < m - 1 && angkasa[i][j + 1] != 'o' && angkasa[i][j + 1] == '.') {
                    angkasa[i][j + 1] = '*';
                    angkasa[i][j] = '.';
                } else if (angkasa[i][j + 1] == '*') {
                    angkasa[i][j + 1] = '.';
                    angkasa[i][j] = '.';
                }
            }
        }
    }
}

void moveLeft(char angkasa[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (angkasa[i][j] == '*') {
                if (j > 0 && angkasa[i][j - 1] != 'o' && angkasa[i][j - 1] == '.') {
                    angkasa[i][j - 1] = '*';
                    angkasa[i][j] = '.';
                } else if (angkasa[i][j - 1] == '*') {
                    angkasa[i][j - 1] = '.';
                    angkasa[i][j] = '.';
                }
            }
        }
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char angkasa[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char x;
            scanf(" %c", &x);
            angkasa[i][j] = x;
        }
    }
    
    int panjang;
    scanf("%d", &panjang);
	
    char perintah[panjang];
    scanf("%s", perintah);

    for (int i = 0; i < panjang; i++) {
        if (perintah[i] == 'w') {
            moveUp(angkasa, n, m);
        } else if (perintah[i] == 's') {
            moveDown(angkasa, n, m);
        } else if (perintah[i] == 'a') {
            moveLeft(angkasa, n, m);
        } else if (perintah[i] == 'd') {
            moveRight(angkasa, n, m);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%c", angkasa[i][j]);
        }
        printf("\n");
    }

    return 0;
}

