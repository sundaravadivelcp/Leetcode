class Solution {
public:
    string largestOddNumber(string num) {
    // Start from the end of the string.
    for (int i = num.length() - 1; i >= 0; i--) {
      // Check if the current character is odd.
      if (num[i] % 2 == 1) {
        // Return the substring from the beginning of the string to the current index.
        return num.substr(0, i + 1);
      }
    }

    // If no odd characters are found, return an empty string.
    return "";
    }
};