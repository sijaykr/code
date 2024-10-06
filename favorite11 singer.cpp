#include<bits/stdc++.h>
#include<vector>
using namespace std;

int countFavouriteSingers(int numSongs, const vector<int>& singers) {
    unordered_map<int, int> singerCount;

    // Count occurrences of each singer
    for (int singer : singers) {
        singerCount[singer]++;
    }

    // Find the maximum frequency of any singer
    int maxFrequency = 0;
    for (const auto& pair : singerCount) {
        maxFrequency = max(maxFrequency, pair.second);
    }

    // Count how many singers have the maximum frequency
    int favouriteSingersCount = 0;
    for (const auto& pair : singerCount) {
        if (pair.second == maxFrequency) {
            favouriteSingersCount++;
        }
    }

    return favouriteSingersCount;
}

int main() {
    int numSongs;
    cin >> numSongs;

    vector<int> singers(numSongs);
    for (int i = 0; i < numSongs; ++i) {
        cin >> singers[i];
    }

    // Calculate the number of favourite singers
    int result = countFavouriteSingers(numSongs, singers);

    // Output the result
    cout << result << endl;

    return 0;
}
