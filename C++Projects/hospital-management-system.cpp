#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Forward declarations
class Doctor;
class Patient;

// Appointment class
class Appointment {
private:
    Doctor* doctor;
    Patient* patient;
    string date;

public:
    Appointment(Doctor* doc, Patient* pat, const string& dt) : doctor(doc), patient(pat), date(dt) {}

    void displayDetails() const {
        cout << "Appointment Date: " << date << endl;
        cout << "Doctor: " << doctor->getName() << endl;
        cout << "Patient: " << patient->getName() << endl;
    }
};

// Doctor class
class Doctor {
private:
    string name;
    string specialization;
    vector<Appointment*> appointments;

public:
    Doctor(const string& n, const string& spec) : name(n), specialization(spec) {}

    string getName() const {
        return name;
    }

    void addAppointment(Appointment* app) {
        appointments.push_back(app);
    }

    void displayAppointments() const {
        cout << "Doctor: " << name << endl;
        cout << "Specialization: " << specialization << endl;
        cout << "Appointments:" << endl;
        for (const auto& app : appointments) {
            app->displayDetails();
            cout << "-----------------" << endl;
        }
    }
};

// Patient class
class Patient {
private:
    string name;
    int age;
    vector<Appointment*> appointments;

public:
    Patient(const string& n, int a) : name(n), age(a) {}

    string getName() const {
        return name;
    }

    void addAppointment(Appointment* app) {
        appointments.push_back(app);
    }

    void displayAppointments() const {
        cout << "Patient: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Appointments:" << endl;
        for (const auto& app : appointments) {
            app->displayDetails();
            cout << "-----------------" << endl;
        }
    }
};

int main() {
    string docName, docSpec, patName;
    int patAge;
    string appDate;

    cout << "Enter doctor's name: ";
    getline(cin, docName);
    cout << "Enter doctor's specialization: ";
    getline(cin, docSpec);

    cout << "Enter patient's name: ";
    getline(cin, patName);
    cout << "Enter patient's age: ";
    cin >> patAge;
    cin.ignore(); // Clear the newline character from input buffer

    cout << "Enter appointment date (YYYY-MM-DD): ";
    getline(cin, appDate);

    Doctor doctor(docName, docSpec);
    Patient patient(patName, patAge);
    Appointment appointment(&doctor, &patient, appDate);

    doctor.addAppointment(&appointment);
    patient.addAppointment(&appointment);

    cout << "\nDoctor's Appointments:" << endl;
    doctor.displayAppointments();

    cout << "\nPatient's Appointments:" << endl;
    patient.displayAppointments();

    return 0;
}

