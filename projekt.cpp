#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    char widoczna[10][10];
    char bomby[10][10];

    for (int i=0;i<10; i++) {
        for (int j=0; j<10; j++) {
            widoczna[i][j] = '?';
            bomby[i][j] = '.';
        }
    }
    int wylosowane = 0;
    while (wylosowane < 15) {
        int x = rand() % 10;
        int y = rand() % 10;
        if (bomby[x][y] == '.') {
            bomby[x][y] = '*';
            wylosowane++;
        }
    }

    int punkty = 0;
    bool gra = true;
