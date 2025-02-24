#include <iostream>
using namespace std;

class SmartLight {
private:
    static int defaultBrightness; // STATIC DEFAULT BRIGHTNESS
    int brightness; // INSTANCE BRIGHTNESS

public:
    // CONSTRUCTOR: SET INITIAL BRIGHTNESS TO DEFAULT
    SmartLight() : brightness(defaultBrightness) {}

    // SET DEFAULT BRIGHTNESS (STATIC)
    static void setDefaultBrightness(int b) {
        defaultBrightness = b;
    }

    // UPDATE INSTANCE BRIGHTNESS
    void updateBrightness(int b) {
        brightness = b;
    }

    // SHOW INSTANCE BRIGHTNESS
    void showBrightness() const {
        cout << "CURRENT BRIGHTNESS: " << brightness << endl;
    }

    // GET DEFAULT BRIGHTNESS (STATIC)
    static int getDefaultBrightness() {
        return defaultBrightness;
    }
};

// INITIALIZE STATIC VARIABLE
int SmartLight::defaultBrightness = 50;

int main() {
    // CREATE OBJECTS
    SmartLight light1, light2;

    // DISPLAY INITIAL BRIGHTNESS
    cout << "INITIAL BRIGHTNESS OF LIGHTS:" << endl;
    light1.showBrightness();
    light2.showBrightness();

    // CHANGE DEFAULT BRIGHTNESS
    SmartLight::setDefaultBrightness(80);

    // CREATE NEW OBJECT AFTER UPDATING DEFAULT
    SmartLight light3;
    cout << "\nNEW DEFAULT BRIGHTNESS: " << SmartLight::getDefaultBrightness() << endl;
    light3.showBrightness();

    // UPDATE BRIGHTNESS OF LIGHT1
    light1.updateBrightness(90);
    cout << "\nUPDATED BRIGHTNESS OF LIGHT 1:" << endl;
    light1.showBrightness();

    return 0;
}
