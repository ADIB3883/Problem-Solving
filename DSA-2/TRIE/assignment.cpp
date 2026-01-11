#include <iostream>
#include <vector>
using namespace std;

class TrieNode {
public:
    vector<TrieNode*> children;
    int frequency;

    TrieNode() {
        children = vector<TrieNode*>(26, nullptr);
        frequency = 0;
    }
};

// Insert a string into the trie
void insert(TrieNode* root, string& key) {
    TrieNode* curr = root;

    for (char ch : key) {
        int idx = ch - 'A';
        if (curr->children[idx] == nullptr) {
            curr->children[idx] = new TrieNode();
        }
        curr = curr->children[idx];
        curr->frequency++; // Increment frequency for this node
    }
}

// Find the longest common prefix for the highest frequency strings
string findLCP(TrieNode* root, string& first) {
    TrieNode* curr = root;
    string lcp = "";

    for (char ch : first) {
        int idx = ch - 'a';
        if (curr->children[idx] && curr->children[idx]->frequency > 1) {
            lcp += ch;
            curr = curr->children[idx];
        } else {
            break; // Stop if frequency is 1 or no valid child exists
        }
    }

    return lcp;
}

// Function to compute longest common prefix for the highest number of strings
string longestCommonPrefix(vector<string>& arr) {
    TrieNode* root = new TrieNode();

    // Insert all strings into the trie
    for (string& s : arr)
        insert(root, s);

    // Find LCP for the highest frequency
    return findLCP(root, arr[0]);
}

int main() {
    vector<string> arr = {"ACG", "TC",
                          "TCCGTGC", "TCGCCGT"};

    cout << longestCommonPrefix(arr) << endl;
    return 0;
}
