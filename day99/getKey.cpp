#include<bits/stdc++.h>
using namespace std ;

int generateKey(int num1, int num2, int num3) {
        string s1 = string(4 - to_string(num1).length(), '0') + to_string(num1);
        string s2 = string(4 - to_string(num2).length(), '0') + to_string(num2);
        string s3 = string(4 - to_string(num3).length(), '0') + to_string(num3);

        string key = "";
        for (int i = 0; i < 4; ++i) {
            char minDigit = min({s1[i], s2[i], s3[i]});
            key += minDigit;
        }

        int nonZero = 0;
        while (nonZero < key.size() && key[nonZero] == '0') {
            ++nonZero;
        }

        return nonZero == key.size() ? 0 : stoi(key.substr(nonZero));
    }

int main() {
    int num1 = 1234;
    int num2 = 5678;
    int num3 = 9101;

    int key = generateKey(num1, num2, num3);
    cout << "Generated Key: " << key << endl;

    return 0;
}