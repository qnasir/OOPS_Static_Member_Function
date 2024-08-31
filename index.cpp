#include <iostream>
#include <string>
using namespace std;

class Pet {
private:
    string name;
    string type;
    bool isAdopted;
    
    // Static variable to keep track of total adoptions
    static int totalAdoptions;

public:
    Pet(string n, string t) : name(n), type(t), isAdopted(false) {}

    // Function to adopt a pet
    void adopt() {
        if (!isAdopted) {
            isAdopted = true;
            totalAdoptions++;
        } else {
            cout << "This pet is already adopted!" << endl;
        }
    }

    // Static member function to get total number of adoptions
    static int getTotalAdoptions() {
        return totalAdoptions;
    }

    void display() {
        cout << "Pet Name: " << name << ", Type: " << type 
             << ", Adoption Status: " << (isAdopted ? "Adopted" : "Available") << endl;
    }
};

// Initialize static variable outside the class
int Pet::totalAdoptions = 0;

int main() {
    Pet pet1("Mukund", "Billa");
    Pet pet2("Arun", "Cat");

    pet1.adopt();  // Adopt Mukund
    pet2.adopt();  // Adopt Arun

    // Use static member function to display total adoptions
    cout << "Total Adoptions: " << Pet::getTotalAdoptions() << endl;

    return 0;
}
