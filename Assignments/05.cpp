#include <iostream>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructors
    Time() : hours(0), minutes(0), seconds(0) {}

    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Function to display time in proper format
    void display() const {
        std::cout << "Time: ";
        if (hours < 10) std::cout << "0";
        std::cout << hours << ":";
        if (minutes < 10) std::cout << "0";
        std::cout << minutes << ":";
        if (seconds < 10) std::cout << "0";
        std::cout << seconds << "\n";
    }

    // Function to increment time by 1 second
    void incrementSecond() {
        seconds++;
        if (seconds >= 60) {
            seconds = 0;
            minutes++;
            if (minutes >= 60) {
                minutes = 0;
                hours++;
                if (hours >= 24) {
                    hours = 0;
                }
            }
        }
    }

    // Function to decrement time by 1 second
    void decrementSecond() {
        seconds--;
        if (seconds < 0) {
            seconds = 59;
            minutes--;
            if (minutes < 0) {
                minutes = 59;
                hours--;
                if (hours < 0) {
                    hours = 23;
                }
            }
        }
    }
};

int main() {
    Time t1(12, 30, 45); // Creating a Time object with initial values
    t1.display(); // Displaying the time

    t1.incrementSecond(); // Incrementing time by 1 second
    t1.display();

    t1.decrementSecond(); // Decrementing time by 1 second
    t1.display();

    return 0;
}
