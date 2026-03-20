#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// 1. Frequency Count
void frequencyCount(vector<int>& arr) {
    unordered_map<int, int> freq;

    for (int num : arr) {
        freq[num]++;
    }

    cout << "Frequency of elements:\n";
    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }
}

// 2. Highest Occurring Element
void highestFrequency(vector<int>& arr) {
    unordered_map<int, int> freq;
    int maxFreq = 0, element = -1;

    for (int num : arr) {
        freq[num]++;
        if (freq[num] > maxFreq) {
            maxFreq = freq[num];
            element = num;
        }
    }

    cout << "Highest occurring element: " << element 
         << " (Frequency: " << maxFreq << ")\n";
}

// 3. Two Sum Problem
void twoSum(vector<int>& arr, int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];

        if (mp.find(complement) != mp.end()) {
            cout << "Pair found: (" << complement 
                 << ", " << arr[i] << ")\n";
            return;
        }
        mp[arr[i]] = i;
    }

    cout << "No pair found\n";
}

int main() {
    vector<int> arr = {1, 3, 2, 1, 4, 1, 3};

    frequencyCount(arr);
    cout << endl;

    highestFrequency(arr);
    cout << endl;

    twoSum(arr, 5);

    return 0;
}
