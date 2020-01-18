#include <iostream>
#include <conio.h>

using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruit_x, fruit_y, score;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2 - 1;
    y = height / 2 - 1;
    fruit_x = rand() % width;
    fruit_x = rand() % height;
    score = 0;
}

void Draw() {
    system("cls");
    for (int i = 0; i < width + 1; i++) {
        cout << "#";
    }
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int f = 0; f < width; f++) {
            if (f == 0 || f == width - 1)
                cout << "#";
            if (i == y && f == x)
                cout << "0";
            else if (i == fruit_y && f == fruit_x)
                cout << "F";
            else 
                cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < width + 1; i++) {
        cout << "#";
    }
    cout << endl;
}

void Input() {
    if (_kbhit ()) {
        switch (_getch ())
        {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}

void Logic() {
    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        break;
        x++;
    case UP:
        break;
        y--;
    case DOWN:
        y++;
        break;
    }
}

int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
    }

    return 0;
}