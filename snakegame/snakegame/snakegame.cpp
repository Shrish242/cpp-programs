#include<iostream>
#include<conio.h>
using namespace std;
bool gameover;
const int height = 20;
const int width = 20;
int x, y, fruitsx, fruity, score;
enum eDirection{STOP= 0 , LEFT , RIGHT , UP , DOWN};
eDirection dir;

void setup() {
	gameover = false;
	dir = STOP;	
	x = height / 2;
	y = width / 2;
	fruitsx = rand() % width;
	fruity = rand() % height;
	score = 0;
}

void draw() {
	system("cls");
	for (int i = 0; i < width * 2; i++) {
		cout << "-";
	}
	cout << endl;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (j == 0) {
				cout << "|";
			}
			if (i == y && j == x) {
				cout << ">";
			}
			else if (i == fruitsx && j == fruity) {
				cout << "o";
			}
			else {
				cout << " ";
			}
			if (j == width - 1) {
				cout << "|";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}



	for (int i = 0; i < width * 2; i++) {
		cout << "-";
	}
	cout << endl;
	cout << "score:" << score<<endl;

}

void input() {
	if (_kbhit()) {
		switch (_getch()) {
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
			
		}
	}

}

void logic() {
	switch (dir) {
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	default:
		break;
	}

	if (x >= width || x < 0 || y >= height || y < 0) {
		gameover = true;
	}
	if (x == fruitsx && y == fruity) {
		score = score + 1;

		// Generate new fruit position that is not the same as player's position
		do {
			fruitsx = rand() % width;
			fruity = rand() % height;
		} while (fruitsx == x && fruity == y);
	}
}
s



int main() {
	setup();
	while (!gameover) {
		draw();
		input();
		logic();
	}
}