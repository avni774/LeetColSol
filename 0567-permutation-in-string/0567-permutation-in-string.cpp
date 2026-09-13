class Solution {
public:
    bool sameFrequency(int s1Freq[], int windowFreq[]) {
        for (int i = 0; i < 26; i++) {
            if (s1Freq[i] != windowFreq[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int windowSize = s1.length();

        if (windowSize > s2.length()) {
            return false;
        }

        int s1Freq[26] = {0};
        int windowFreq[26] = {0};

        // Count characters in s1 and the first window of s2
        for (int i = 0; i < windowSize; i++) {
            s1Freq[s1[i] - 'a']++;
            windowFreq[s2[i] - 'a']++;
        }

        // Check the first window
        if (sameFrequency(s1Freq, windowFreq)) {
            return true;
        }

        // Slide the window through s2
        for (int right = windowSize; right < s2.length(); right++) {
            int left = right - windowSize;

            // Add the new character
            windowFreq[s2[right] - 'a']++;

            // Remove the old character
            windowFreq[s2[left] - 'a']--;

            if (sameFrequency(s1Freq, windowFreq)) {
                return true;
            }
        }

        return false;
    }
};