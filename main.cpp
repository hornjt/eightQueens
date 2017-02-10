//
//  main.cpp
//  eightQueens
//
//  Created by Jon Horn on 2/10/17.
//  Copyright © 2017 Jon Horn. All rights reserved.
//

#include <iostream>
using namespace std;
int board[8][8] = {0};

void viewBoard() {
    for (int c = 0; c < 8; c++) {
        for (int r = 0; r < 8; r++) {
            cout << board[c][r] << " ";
        }
        cout << endl;
    }
}

void checkColumn() {

}

void checkRow() {

}

void eightQueens() {
    
}

int main(int argc, const char * argv[]) {
    viewBoard();
}
