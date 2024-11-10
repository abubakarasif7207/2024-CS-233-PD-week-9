






#include<iostream>
using namespace std;

int common_ch(string str_1, string str_2) {
    int count = 0;


    for (int i = 0; str_1[i] != '\0'; i++) { 
        
        for (int j = 0; str_2[j] != '\0'; j++) { 
            if (str_1[i] == str_2[j]) {
                count++;
                str_2[j] = '#'; 
                break; //
            }
        }
    }

    return count;
}

int main() {
    string str_1, str_2;
    cout << "Enter first string: ";
    cin >> str_1;
    cout << "Enter second string: ";
    cin >> str_2;

    int result = common_ch(str_1, str_2);
    cout << "Number of common characters: " << result << endl;
    
    return 0;
}
