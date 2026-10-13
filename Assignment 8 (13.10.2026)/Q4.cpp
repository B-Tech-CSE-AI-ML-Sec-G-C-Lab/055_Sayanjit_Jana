/*
4.	A smart device has two independent capabilities: communication and media playback. A SmartPhone class inherits features from both Communication and Media.

Questions:
    a)	Create a Communication class with a function to make a call.
    b)	Create a Media class with a function to play music.
    c)	Derive SmartPhone from both classes.
    d)	Add a function to display the smartphone model.
    e)	Demonstrate multiple inheritance using an object of SmartPhone.
*/

#include <iostream>
using namespace std;

// Base class 1
class Communication
{
public:
    void makeCall()
    {
        cout << "Making a phone call..." << endl;
    }
};

// Base class 2
class Media
{
public:
    void playMusic()
    {
        cout << "Playing music..." << endl;
    }
};

// Derived class
class SmartPhone : public Communication, public Media
{
private:
    string model;

public:
    void displayModel()
    {
        cout << "Enter Smartphone Model: ";
        cin >> model;
        cout << "Smartphone Model: " << model << endl;
    }
};

int main()
{
    SmartPhone s;

    s.displayModel();
    s.makeCall();
    s.playMusic();

    return 0;
}
