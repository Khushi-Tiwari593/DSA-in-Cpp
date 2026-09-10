#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {

    if (s.length() != t.length()) {
        return false;
    }

    unordered_map<char, int> freq;

    for (char ch : s) {
        freq[ch]++;
    }

    for (char ch : t) {
        freq[ch]--;
    }

    for (auto it : freq) {
        if (it.second != 0) {
            return false;
        }
    }

    return true;
}

int main() {

    string s = "listen";
    string t = "silent";

    if (isAnagram(s, t)) {
        cout << "Anagram";
    }
    else {
        cout << "Not Anagram";
    }

    return 0;
}