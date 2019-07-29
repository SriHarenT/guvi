#include<bits/stdc++.h>
#include "iostream"
#define NO_OF_CHARS 256
using namespace std;

 
// This function returns true if s1 and s2 are ismorphic
bool isIsomorphic(string s1, string s2)
{
 
    int m = s1.length(), n = s2.length();
 
    //if lengths are not same then they are not isomorphic
    if (m != n)
      return false;
 
    // To mark visited characters in s2
    bool is_visited[NO_OF_CHARS] = {false};
 
    // To store mapping of every character from s1 to
    // that of s2. Initialize all entries of map as -1.
    int map[NO_OF_CHARS];
    memset(map, -1, sizeof(map));
 
    // P
    for (int i = 0; i < n; i++)
    {
        // If current character of s1 is seen first
        // time in it.
        if (map[s1[i]] == -1)
        {
            // If current character of s2 is already
            // seen, one to one mapping not possible
            if (is_visited[s2[i]] == true)
                return false;
 
            // Mark current character of s2 as visited
            is_visited[s2[i]] = true;
 
            // Store mapping of current characters
            map[s1[i]] = s2[i];

        }
 
        //if this is not the first appearence of char in s1
        //then check its previous appearence is mapped to the
        //respective character
        else if (map[s1[i]] != s2[i])
            return false;
    }
 
    return true;
}

int main()

{

string string_1;

string string_2;

cin >> string_1;

cin >> string_2;

if (isIsomorphic(string_1, string_2))

cout << "yes";

else

cout << "no";

return 0;
}
