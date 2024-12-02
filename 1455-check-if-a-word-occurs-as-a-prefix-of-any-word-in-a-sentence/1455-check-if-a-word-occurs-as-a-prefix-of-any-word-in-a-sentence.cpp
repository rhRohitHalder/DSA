class Solution {
public:
    int isPrefixOfWord(string sen, string target) {
    // Used for breaking into words from sentence
    stringstream str(sen); // Use stringstream to split the sentence into words
    string word;
    int wordIndex = 1; // Word indices are 1-based

    while (str >> word) {
        if (word.find(target) == 0) { // Check if target is a prefix (index 0)
            return wordIndex;
        }
        wordIndex++;
    }

    return -1;
    }
};