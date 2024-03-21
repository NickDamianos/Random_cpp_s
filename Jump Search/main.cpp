#include <iostream>

using namespace std;
//gia kapio paraksenw logo kolaei xwris ta continue;
bool jump(int* list, int meg, int alm, int key,int& apot) {

    int i = 0;

    while (i < meg) {
        if (list[i] == key) {
            apot = list[i];
            return true;
        } else if ((i + alm) >= meg && (i + 1) < meg) {
            i++;
            continue;
        } else if ((i + alm) >= meg && (i + 1) > meg) {
            return false;
        } else {
            if (list[i] < key) {
                i += alm;
                continue;
            } else {
                while (i > 0) {
                    i--;
                    if (list[i] == key) {
                        apot = list[i];
                        
                        return true;
                    }
                }
                return false;
                
            }
        }

        return false;
    }
}

int main(int argc, char** argv) {
    int list[100];
    for (int i = 0; i < 100; i++) {
        list[i] = i;
    }

    int y = -1;
    
    cout << jump(&list[0], 100, 2, 99, y) <<endl;
    cout << " apotelesma : " << y <<   endl;

    return 0;
}
