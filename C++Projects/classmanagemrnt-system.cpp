#include <iostream>
#include <cstring>

class Student {
protected:
    int rollno;
    char sname[21]; // 20 characters + null terminator

public:
    Student(int rollno, const char* sname) : rollno(rollno) {
        strncpy(this->sname, sname, sizeof(this->sname) - 1);
        this->sname[sizeof(this->sname) - 1] = '\0'; // Ensure null termination
    }

    virtual void takedata() = 0;
    virtual void showdata() const = 0;
};

class ArtsStudent : public Student {
private:
    int ph, hs, en, as;

public:
    ArtsStudent(int rollno, const char* sname) : Student(rollno, sname) {}

    void takedata() override {
        std::cout << "Enter marks for Philosophy, History, English, Assamese: ";
        std::cin >> ph >> hs >> en >> as;
    }

    void showdata() const override {
        std::cout << "Roll No: " << rollno << std::endl;
        std::cout << "Name: " << sname << std::endl;
        std::cout << "Marks: Philosophy=" << ph << ", History=" << hs << ", English=" << en << ", Assamese=" << as << std::endl;
    }
};

class ScienceStudent : public Student {
private:
    int ph, ch, ma, en;

public:
    ScienceStudent(int rollno, const char* sname) : Student(rollno, sname) {}

    void takedata() override {
        std::cout << "Enter marks for Physics, Chemistry, Mathematics, English: ";
        std::cin >> ph >> ch >> ma >> en;
    }

    void showdata() const override {
        std::cout << "Roll No: " << rollno << std::endl;
        std::cout << "Name: " << sname << std::endl;
        std::cout << "Marks: Physics=" << ph << ", Chemistry=" << ch << ", Mathematics=" << ma << ", English=" << en << std::endl;
    }
};

int main() {
    // Example usage:
    ArtsStudent artsStud(1, "John Doe");
    ScienceStudent scienceStud(2, "Jane Smith");

    artsStud.takedata();
    std::cout << "\nArts Student's Mark Sheet:\n";
    artsStud.showdata();

    std::cout << "\n";

    scienceStud.takedata();
    std::cout << "\nScience Student's Mark Sheet:\n";
    scienceStud.showdata();

    return 0;
}
