#include <iostream>
using namespace std;
int main() {
    class Programm {
        public: std::string Quetschen(std::string bilddaten) {
                int i = 0;
                int j = 0;
                int k;
                int aLength = bilddaten.length();
                const char* daten = bilddaten.c_str();
                std::string kompStr = "";
                char z;
                while (i < sizeof(aLength)) {
                    z = daten[i];
                    while (i < sizeof(daten) && z == daten[i]) {
                        i++;
                        j++;
                    }
                    if (j < 4) {
                        for (k = 1; k <= j; k++) {
                            kompStr += z;
                        }
                    }
                    else {
                        kompStr += "§" + j + z;
                    }
                    j = 0;
                }
             return kompStr;
        }
    }

    std::string input = "DDDDDHHNNMMUUUUUUUIIIIGGGGGGGLLLLLLLLLLLLXXXXXXXYYTTTTTTTTTTTT";
    int unkomp = input.length();
    std::string komprimiert = Programm::Quetschen(input);
    int komp = komprimiert.length();
    std::cout << "Unkomprimierter String: " + input + "\n\nGröße in Zeichen: " << unkomp + "\n";
    std::cout << "Komprimierter String: " + komprimiert + "\n\nGröße in Zeichen: " << komp;
    return 0;
};