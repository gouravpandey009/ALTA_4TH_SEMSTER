#include<iostream>
using namespace std;

int main() {
    int arr[] = { 1, 3 , 2 , 1 , 4 , 2 , 3};
    int n = 7;

    int hash[10] = {0};

    for(int i = 0 ; i < n ; i++){
        hash[arr[i]]++;
    }

    cout << "Frequency of elements: \n";

    for(int i = 0 ; i < 10 ; i++){
        if(hash[i] > 0)
         cout << i << " -> " << hash[i] << endl;
    }
}