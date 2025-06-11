#include <iostream>
using namespace std;

// Temperature Monitor
class TemperatureMonitor {
private:
    float temperature;
public:
    TemperatureMonitor() {
        cout << "TemperatureMonitor created\n";
    }

    ~TemperatureMonitor() {
        cout << "TemperatureMonitor destroyed\n";
    }

    void updateTemperature(float valueCelsius) {
        temperature = valueCelsius;
        cout << "Temperature updated to " << temperature << " °C\n";
    }
};

// Dimension Variation Monitor
class DimentionVariationMonitor {
private:
    float dimentionVariation;
public:
    DimentionVariationMonitor() {
        cout << "DimentionVariationMonitor created\n";
    }

    ~DimentionVariationMonitor() {
        cout << "DimentionVariationMonitor destroyed\n";
    }

    void updateDimentionVariation(float variationMM) {
        dimentionVariation = variationMM;
        cout << "Dimension variation updated to " << dimentionVariation << " mm\n";
    }
};

// Continuous Operation Minutes Monitor
class ContinuousOperationMinutesMonitor {
private:
    int continuousOperationMinutes;
public:
    ContinuousOperationMinutesMonitor() {
        cout << "ContinuousOperationMinutesMonitor created\n";
    }

    ~ContinuousOperationMinutesMonitor() {
        cout << "ContinuousOperationMinutesMonitor destroyed\n";
    }

    void updateContinuousOperationMinutes(int minutes) {
        continuousOperationMinutes = minutes;
        cout << "Continuous operation time updated to " << continuousOperationMinutes << " minutes\n";
    }
};

// Self Test Code Monitor
class SelfTestCodeMonitor {
private:
    int selfTestCode;
public:
    SelfTestCodeMonitor() {
        cout << "SelfTestCodeMonitor created\n";
    }

    ~SelfTestCodeMonitor() {
        cout << "SelfTestCodeMonitor destroyed\n";
    }

    void updateCheckSelfTestCode(int code) {
        selfTestCode = code;
        cout << "Self test code updated to " << selfTestCode << endl;
    }
};

// CNC Machine Monitor
class CNCMachineMonitor {
private:
    TemperatureMonitor temperatureObj;
    DimentionVariationMonitor dimentionVariationObj;
    ContinuousOperationMinutesMonitor continuousOperationMinutesObj;
    SelfTestCodeMonitor selfTestCodeObj;

public:
    CNCMachineMonitor() {
        cout << "CNCMachineMonitor created\n";
    }

    ~CNCMachineMonitor() {
        cout << "CNCMachineMonitor destroyed\n";
    }

    void monitor() {
        temperatureObj.updateTemperature(75.3);
        dimentionVariationObj.updateDimentionVariation(0.02);
        continuousOperationMinutesObj.updateContinuousOperationMinutes(120);
        selfTestCodeObj.updateCheckSelfTestCode(101);
    }
};

// Main
int main() {
    CNCMachineMonitor machineMonitor;
    machineMonitor.monitor();
    return 0;
}
