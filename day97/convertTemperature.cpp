#include<bits/stdc++.h>
using namespace std;

vector<double> convertTemperature(double celsius) {
        vector<double> result ;
        double kelvin = celsius + 273.15 ;
        double fahrenheit = celsius * 1.80 + 32.00  ;
        result.push_back(kelvin) ;
        result.push_back(fahrenheit) ;
        return result ;
    }

int main() {
    double celsius = 25.0; 
    vector<double> temperatures = convertTemperature(celsius);

    cout << "Kelvin: " << temperatures[0] << ", Fahrenheit: " << temperatures[1] << endl;
    
    return 0;
}

int main() {
    double celsius = 25.0; 
    vector<double> temperatures = convertTemperature(celsius);

    cout << "Kelvin: " << temperatures[0] << ", Fahrenheit: " << temperatures[1] << endl;
    
    return 0;
}