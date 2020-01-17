#include <iostream>

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
    x = width / 2;
    y = height / 2;
    fruit_x = rand() % width;
    fruit_y = rand() % height;
    score = 0;
}

void Draw() {

}

void Input() {

}

void Logic() {

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