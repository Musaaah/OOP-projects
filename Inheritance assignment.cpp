//NAME: MOSES WACHIRA
//REG NO :BSE-05-0193/2024
//ASSIGNMENT: INHERITANCE

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
    LibraryMember(string n, int id, int books) {
        setName(n);
        memberID = id;
        booksBorrowed = books;
    }

    int getMemberID() {
        return memberID;
    }

    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    PremiumMember(string n, int id, int books, double fee) : LibraryMember(n, id, books) {
        membershipFee = fee;
    }

    double getMembershipFee() {
        return membershipFee;
    }
};

int main() {
    PremiumMember PM("Musaah ", 34552, 1, 445);

    cout << "Name: " << PM.getName() <<endl;
    cout << "Member ID: " << PM.getMemberID() << endl;
    cout << "Books Borrowed: " << PM.getBooksBorrowed() << endl;
    cout << "Membership Fee: " << PM.getMembershipFee() << endl;

    return 0;
}

