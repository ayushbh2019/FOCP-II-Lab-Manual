<<<<<<< HEAD
#include <iostream>
using namespace std;

class SmartLight {
private:
    string brand;
    int brightness;   // 0-100
    bool isOn;

public:
    // Default constructor
    SmartLight() {
        brand = "NoBrand";
        brightness = 50;
        isOn = false;
    }

    // Parameterised constructor
    SmartLight(string b, int br, bool on) {
        brand = b;
        brightness = br;
        isOn = on;
    }

    void turnOn() {
        isOn = true;
    }

    void turnOff() {
        isOn = false;
    }

    void increaseBrightness() {
        brightness = brightness + 10;
    }

    void decreaseBrightness() {
        brightness = brightness - 10;
    }

    void displayStatus() {
        cout << "Brand: " << brand << endl;
        cout << "Brightness: " << brightness << endl;
        cout << "Light is: ";
        if (isOn == true)
            cout << "ON";
        else
            cout << "OFF";
        cout << endl << endl;
    }

    // Destructor
    ~SmartLight() {
        cout << "Object destroyed" << endl;
    }
};

int main() {

    SmartLight light1;  // default object
    SmartLight light2("Philips", 80, true);  // parameterised object
light1.displayStatus();
light2.displayStatus();
    // Testing light1
    light1.turnOn();
    light1.increaseBrightness();
    light2.decreaseBrightness();
    light1.displayStatus();

    // Testing light2
    light2.decreaseBrightness();
    light2.turnOff();
    light2.displayStatus();

    return 0;
=======
#include <iostream>
using namespace std;

class SmartLight {
private:
    string brand;
    int brightness;   // 0-100
    bool isOn;

public:
    // Default constructor
    SmartLight() {
        brand = "NoBrand";
        brightness = 50;
        isOn = false;
    }

    // Parameterised constructor
    SmartLight(string b, int br, bool on) {
        brand = b;
        brightness = br;
        isOn = on;
    }

    void turnOn() {
        isOn = true;
    }

    void turnOff() {
        isOn = false;
    }

    void increaseBrightness() {
        brightness = brightness + 10;
    }

    void decreaseBrightness() {
        brightness = brightness - 10;
    }

    void displayStatus() {
        cout << "Brand: " << brand << endl;
        cout << "Brightness: " << brightness << endl;
        cout << "Light is: ";
        if (isOn == true)
            cout << "ON";
        else
            cout << "OFF";
        cout << endl << endl;
    }

    // Destructor
    ~SmartLight() {
        cout << "Object destroyed" << endl;
    }
};

int main() {

    SmartLight light1;  // default object
    SmartLight light2("Philips", 80, true);  // parameterised object
light1.displayStatus();
light2.displayStatus();
    // Testing light1
    light1.turnOn();
    light1.increaseBrightness();
    light2.decreaseBrightness();
    light1.displayStatus();

    // Testing light2
    light2.decreaseBrightness();
    light2.turnOff();
    light2.displayStatus();

    return 0;
>>>>>>> c42ec45e17a73f20e7928ba8e30bfbc54e406d1c
}