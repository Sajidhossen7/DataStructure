#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <conio.h> // For _kbhit() and _getch()

using namespace std;

const int WIDTH = 20;
const int HEIGHT = 20;
const char SNAKE_HEAD = 'O';
const char SNAKE_BODY = 'o';
const char FOOD = 'X';
const char EMPTY = ' ';

struct SnakeSegment {
    int x, y;
};

class SnakeGame {
public:
    SnakeGame() : direction(0), length(4), foodX(0), foodY(0), gameOver(false) {
        srand(static_cast<unsigned>(time(0)));
        reset();
    }

    void run() {
        while (!gameOver) {
            processInput();
            update();
            render();
            _sleep(100); // Sleep for 100 milliseconds
        }
        cout << "Game Over! Your score is: " << length - 4 << endl;
    }

private:
    vector<SnakeSegment> snake;
    int direction;
    int length;
    int foodX, foodY;
    bool gameOver;

    void reset() {
        snake.clear();
        for (int i = 0; i < length; ++i) {
            snake.push_back({WIDTH / 2, HEIGHT / 2});
        }
        spawnFood();
    }

    void spawnFood() {
        foodX = rand() % WIDTH;
        foodY = rand() % HEIGHT;
    }

    void processInput() {
        if (_kbhit()) {
            switch (_getch()) {
                case 'w': if (direction != 2) direction = 0; break;
                case 'd': if (direction != 3) direction = 1; break;
                case 's': if (direction != 0) direction = 2; break;
                case 'a': if (direction != 1) direction = 3; break;
            }
        }
    }

    void update() {
        for (int i = length - 1; i > 0; --i) {
            snake[i] = snake[i - 1];
        }

        if (direction == 0) snake[0].y -= 1;
        if (direction == 1) snake[0].x += 1;
        if (direction == 2) snake[0].y += 1;
        if (direction == 3) snake[0].x -= 1;

        if (snake[0].x == foodX && snake[0].y == foodY) {
            length++;
            snake.push_back({0, 0});
            spawnFood();
        }

        if (snake[0].x < 0 || snake[0].x >= WIDTH || snake[0].y < 0 || snake[0].y >= HEIGHT) {
            gameOver = true;
        }

        for (int i = 1; i < length; ++i) {
            if (snake[0].x == snake[i].x && snake[0].y == snake[i].y) {
                gameOver = true;
            }
        }
    }

    void render() {
        system("cls"); // Clear the console

        for (int y = 0; y < HEIGHT; ++y) {
            for (int x = 0; x < WIDTH; ++x) {
                if (x == snake[0].x && y == snake[0].y) {
                    cout << SNAKE_HEAD;
                } else if (x == foodX && y == foodY) {
                    cout << FOOD;
                } else {
                    bool isBody = false;
                    for (int i = 1; i < length; ++i) {
                        if (x == snake[i].x && y == snake[i].y) {
                            cout << SNAKE_BODY;
                            isBody = true;
                            break;
                        }
                    }
                    if (!isBody) {
                        cout << EMPTY;
                    }
                }
            }
            cout << endl;
        }
    }
};

int main() {
    SnakeGame game;
    game.run();
    return 0;
}