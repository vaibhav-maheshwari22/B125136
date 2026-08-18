#include <iostream>
#include <string>
using namespace std;

class Song {
private:
    string songName;
    string artistName;
    float t;

public:
    void get() {
        cout << "enter song name: ";
        getline(cin, songName);
        cout << "enter artist name: ";
        getline(cin, artistName);
        cout << "enter duration (in minutes): ";
        cin >> t;
        cin.ignore();
    }
    friend void compareSongs(Song &s1, Song &s2);
};

void compareSongs(Song &s1, Song &s2) {
    if (s1.t > s2.t) {
        cout << s1.songName << " is longer than " << s2.songName << endl;
    } else if (s2.t > s1.t) {
        cout << s2.songName << " is longer than " << s1.songName << endl;
    } else {
        cout << "Both songs have the same duration." << endl;
    }
}

int main() {
    Song s1, s2;
    cout << "--- Enter details for song 1 ---" << endl;
    s1.get();
    cout << "--- Enter details for song 2 ---" << endl;
    s2.get();
    compareSongs(s1, s2);
    return 0;
}