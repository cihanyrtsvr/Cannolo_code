#include <iostream>
#include <iomanip>

using namespace std;

// Define strict constants (No dynamic resizing allowed in Array Mentality)
const int SIZE = 8;

// --- 1. THE BOUNCER (Boundary & Occupancy Check) ---
// We check the board array directly. 
// "Array Mentality": Don't create new variables if the data exists in the array.
bool isValid(int r, int c, const int board[SIZE][SIZE]) {
    // 1. Check if inside array bounds (0-7)
    // 2. Check if the "slot" is empty (value 0)
    return (r >= 0 && r < SIZE && 
            c >= 0 && c < SIZE && 
            board[r][c] == 0);
}

// --- 2. THE STRATEGIST (Warnsdorff's Rule) ---
// Looks ahead to count moves. 
// Uses pure array referencing.
int getAccessibility(int r, int c, const int board[SIZE][SIZE], 
                     const int horizontal[], const int vertical[]) {
    int accessCount = 0;
    
    for (int i = 0; i < 8; ++i) {
        int nextR = r + vertical[i];
        int nextC = c + horizontal[i];
        
        if (isValid(nextR, nextC, board)) {
            accessCount++;
        }
    }
    return accessCount;
}

int main() {
    // 1. THE BOARD (Fixed Size 2D Array)
    // Initialize all 64 integers to 0.
    int board[SIZE][SIZE] = {0};

    // 2. THE LOOKUP TABLES (Offset Arrays)
    // This is the classic "Array" way to handle geometry.
    const int horizontal[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    const int vertical[8]   = { -1, -2, -2, -1, 1, 2, 2, 1 };

    // 3. START
    int currentRow = 0;
    int currentCol = 0;
    board[currentRow][currentCol] = 1; // Mark step 1

    // 4. MAIN LOOP (Fixed to 63 iterations)
    for (int moveNum = 2; moveNum <= 64; ++moveNum) {
        
        int bestMove = -1;
        int minAccess = 9; // High number to ensure we pick something lower

        // Scan the 8 moves using the Lookup Tables
        for (int i = 0; i < 8; ++i) {
            int nextR = currentRow + vertical[i];
            int nextC = currentCol + horizontal[i];

            if (isValid(nextR, nextC, board)) {
                // Heuristic: How many exits from THAT spot?
                int access = getAccessibility(nextR, nextC, board, horizontal, vertical);
                
                // Optimization: If accessibility is 1, take it immediately!
                // (It means that square is a "dead end", so we MUST visit it now)
                if (access < minAccess) {
                    minAccess = access;
                    bestMove = i;
                }
            }
        }

        // Execute Move
        if (bestMove != -1) {
            currentRow += vertical[bestMove];
            currentCol += horizontal[bestMove];
            board[currentRow][currentCol] = moveNum;
        } else {
            cout << "Error: Trapped at move " << moveNum << endl;
            break;
        }
    }

    // 5. PRINTING (Iterating the Array)
    cout << "--- Knight's Tour (Pure Array Solution) ---\n\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << setw(4) << board[i][j];
        }
        cout << endl;
    }

    return 0;
}