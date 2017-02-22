//
//  main.cpp
//  eightQueens
//
//  Created by Jon Horn on 2/10/17.
//  Copyright © 2017 Jon Horn. All rights reserved.
//

#include <iostream>
using namespace std;
int board[8][8] = {0}, c = 0, r = 0, queenCounter = 0;

void viewBoard() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool checkRow(int rowToCheck) {
    for(int i = 0; i <= 10; i++) {
        if (board[rowToCheck - 1][i] != 0) {
            cout << "Found a queen at row " << rowToCheck << " and column " << i + 1 << endl;
            return false;
        }
    }
    return true;
}

bool checkColumn(int columnToCheck) {
    for(int i = 0; i <= 10; i++) {
        if (board[i][columnToCheck - 1] != 0) {
            cout << "Found a queen at row " << i + 1 << " and column " << columnToCheck << endl;
            return false;
        }
    }
    return true;
}

void eightQueens() {
    while (r != 8 || c != 8) {
        if (board[r][c] == 0 && checkColumn(c + 1) && checkRow(r + 1) ) {
            board[r++][c++] = 1;
//            viewBoard();
            queenCounter++;
        }
    }
}

int main(int argc, const char * argv[]) {
//    viewBoard();
//    board[0][0] = 1;
//    checkColumn(5);
//    checkRow(4);
    viewBoard();
    eightQueens();
    viewBoard();
}
