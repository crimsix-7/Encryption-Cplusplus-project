/*
This project is a simple Encryption code for creating passwords or encrypting messages.

Brief description on how this works.

First, each uppercase or lowercase letter is be shifted three positions to the right, according to the ASCII table:
letter 'a' becomes letter 'd', letter 'y' becomes the character '|' and so on.
Second, each line is reversed. 
After being reversed, all characters from the half on (truncated) is moved one position to the left in ASCII.
In this case, 'b' becomes 'a' and 'a' becomes '`'.


*/


#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main()

{

    int n, size;

    string s;

    cin >> n;

    for(int i = 0; i <= n; ++i)

    {

        getline(cin, s);

        if(i == 0)

            continue;

        size = s.length();

        vector<char> v(size);

        // assigning the characters to an index of vector v.
        for(int j = 0; j < size; ++j)
        {v[j] = s[j];}

        // Switching characters 3 positions to the right.
        for(int j = 0; j < size; ++j)

        {

            if((v[j] >= 'a' && v[j] <= 'z') || (v[j] >= 'A' && v[j] <= 'Z'))

                v[j] = v[j] + 3;

        }

        // Reversing the characters.
        reverse(v.begin(), v.begin() + size);
        

        // Switching half of the characters one space to the right.
        for(int j = (size/2); j < size; ++j)
        {
                v[j] = v[j] - 1;
        }
        

        // outputting the first half of the characters.
        for(int j = 0; j < (size/2); ++j)
        {cout << v[j];}
          
        // outputting the second half the characters.
        for(int j = (size/2); j < size; ++j){
                  cout << v[j];

        }

        cout << endl;
    }

    return 0;

}
