#include <iostream>
#include <string>

using namespace std;

int random(int start, int stop);

int main(int argc, char *argv[]) {
    string arr[] = {"ГОЙДА", "zov", "ZOV", "Z", "V", "O", "Я РУССКИЙ", "ПУТИН БОГ", "ПУТИН ЦАРЬ", "ZZZVVVOOO", "HALAL", "ALLAH", "ZOVZOVZOV"};
    srand(time(__null));

    if (argc > 1) {
        int count = atoi(argv[1]); 
        for (int i = 0; i < count; i ++) {
            cout << arr[random(0, size(arr) - 1)] << " ";
        }

        cout << endl;
        return 0;
    } else {
        cout << "Please, provide the number of words" << endl;
        return 1;
    }
}

int random(int start, int stop) { // i think this is govnocode ✓✓✓
    return rand() % (stop - start + 1) + start;
}
