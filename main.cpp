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

void checkRow(int row) {
    for(int i = 0; i <= 10; i++) {
        if (board[row - 1][i]) {
            cout << "Found a queen at row " << row << " and column " << i + 1 << endl;
        }
    }
}

void checkColumn(int column) {
    for(int i = 0; i <= 10; i++) {
        if (board[i][column - 1]) {
            cout << "Found a queen at row " << i + 1 << " and column " << column << endl;
        }
    }
}

void eightQueens() {
    while (queenCounter != 8) {
        if (! board[r][c] ) {
            board[r][c] = 1;
            queenCounter++;
        }
    }
}

int main(int argc, const char * argv[]) {
//    viewBoard();
    board[3][4] = 1;
//    checkColumn(5);
    checkRow(4);
    viewBoard();
}
