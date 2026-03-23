<<<<<<< HEAD
#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 2, 3, 1};

    for(int i = 0; i < 5; i++) {

        // skip if element already appeared before
        int j;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j])
                break;
        }

        // if found earlier, skip
        if(j < i)
            continue;

        int count = 0;

        for(int k = 0; k < 5; k++) {
            if(arr[i] == arr[k])
                count++;
        }

        cout << arr[i] << " occurs " << count << " times\n";
    }

    return 0;
=======
#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 2, 3, 1};

    for(int i = 0; i < 5; i++) {

        // skip if element already appeared before
        int j;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j])
                break;
        }

        // if found earlier, skip
        if(j < i)
            continue;

        int count = 0;

        for(int k = 0; k < 5; k++) {
            if(arr[i] == arr[k])
                count++;
        }

        cout << arr[i] << " occurs " << count << " times\n";
    }

    return 0;
>>>>>>> c42ec45e17a73f20e7928ba8e30bfbc54e406d1c
}