#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string name;
    int health;
    int score;
    int level;

public:
    void get() {
        cout << "enter player name: ";
        getline(cin, name);
        cout << "Enter health: ";
        cin >> health;
        cout << "Enter score: ";
        cin >> score;
        cout << "Enter level: ";
        cin >> level;
    }
    friend class GameManager;
};

class GameManager {
public:

void display(Player &p) {
    cout << "Name: " << p.name << endl;
    cout << "Health: " << p.health << endl;
    cout << "Score: " << p.score << endl;
    cout << "Level: " << p.level << endl;
}

void check(Player &p) {
    if (p.health > 0) {
        cout << "Player status alive" << endl;
    } else {
        cout << "Player status dead" << endl;
    }
}

void displayScore(Player &p) {
    cout << "Current Score: " << p.score << endl;
}

};

int main() {
    Player p;
    p.get();
    GameManager gm;
    gm.display(p);
    gm.check(p);
    gm.displayScore(p);
    return 0;
}