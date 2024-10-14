// COMSC 210 || Lab 21 || Shayan Khan

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MIN_NR = 5, MAX_NR = 20;
const string NAMES[] = {"Senior", "Godlike", "Old", "Mature", "Teen", "Young", "Junior", "Ancient", "Elder", "Master", "Legendary", "Swift", "Nimble", "Brave", "Bold"};
const string COLORS[] = {"Yellow", "Red", "Gold", "Mauve", "White", "Black", "Blue", "Green", "Silver", "Orange", "Purple", "Brown", "Gray", "Pink", "Turquoise"};

class Goat{
    public:
    int age;
    string name;
    string color;

    Goat(){
        age = rand() % 20 + 1;
        name = NAMES[rand() % 15];
        color = COLORS[rand() % 15];
    }

    Goat(int a, string n, string c) : age(a), name(n), color(c) {}

    void display() const {
        cout << name << " (" << color << " , " << age << ")" << endl;
    }
};