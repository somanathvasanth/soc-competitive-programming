//given qn:
//The edit distance between two strings is the minimum number of operations required to transform one string into the other.
//The allowed operations are:
//Add one character to the string.
//Remove one character from the string.
//Replace one character in the string.
//For example, the edit distance between LOVE and MOVIE is 2, because you can first replace L with M, and then add I.
//Your task is to calculate the edit distance between two strings.


/////////////////////////////Main logic of the code://////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
//We solve this qn by using recurrence relation.
//given str1 of length m and str2 of length n.
//let editdistance[i][j] denote the number of operations required for first i letters of str1 to become first j letters of str2. 
//if the last letter of str1 and str2 same then editdistance[i][j] will be editdistance[i-1][j-1].
//if the last letter str1 is to be replaced editdistance[i][j] will be 1+editdistance[i-1][j-1]
//if the last letter str1 is to be removed editdistance[i][j] will be 1+editdistance[i][j-1]
//if the last letter str1 is to be added editdistance[i][j] will be 1+editdistance[i-1][j]
//if the last letter of str1 and str2 not same we will chose the editdistance[i][j] to be the min of the above 3.
//We will use 2d dynamic programming to solve this recurrence. 







#include <bits/stdc++.h> // Include all standard libraries (usually used in competitive programming)
using namespace std;

int main() {
    string str1, str2;  // Declare two strings to hold the input
    cin >> str1;        // Take the first string input
    cin >> str2;        // Take the second string input

    int m = str1.size(); // Get the length of the first string
    int n = str2.size(); // Get the length of the second string

    // Declare a 2D vector to store the edit distances
    vector<vector<int>> editdistance(m + 1, vector<int>(n + 1));

    // Initialize the first cell of the edit distance matrix
    editdistance[0][0] = 0;

    // Initialize the first row of the edit distance matrix
    for (int i = 0; i < n + 1; i++) {
        editdistance[0][i] = i;
    }

    // Initialize the first column of the edit distance matrix
    for (int i = 0; i < m + 1; i++) {
        editdistance[i][0] = i;
    }

    // Compute the edit distance using dynamic programming
    for (int i = 1; i < m + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                // If characters are the same, no new edit is needed
                editdistance[i][j] = editdistance[i - 1][j - 1];
            } else {
                // If characters are different, find the minimum edit distance
                int x = min(editdistance[i - 1][j - 1], editdistance[i][j - 1]);
                x = min(x, editdistance[i - 1][j]);
                editdistance[i][j] = 1 + x;
            }
        }
    }

    // Output the final edit distance
    cout << editdistance[m][n] << endl;
}

