At the annual meeting of Board of Directors of Acme Inc. If everyone attending shakes hands exactly one time with every other attendee, how many handshakes are there?

Example

There are  attendees, ,  and .  shakes hands with  and , and  shakes hands with . Now they have all shaken hands after  handshakes.

Function Description

Complete the handshakes function in the editor below.

handshakes has the following parameter:

int n: the number of attendees
Returns

int: the number of handshakes
Input Format
The first line contains the number of test cases .
Each of the following  lines contains an integer, .

Constraints



Sample Input

2
1
2
Sample Output

0
1
Explanation

Case 1 : The lonely board member shakes no hands, hence 0.
Case 2 : There are 2 board members, so 1 handshake takes place.

Submissions: 131
Max Score: 10
Difficulty: Easy
Rate This Challenge:

    
More
 

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

int handshake(int n) {
    // Calculate the number of handshakes using the formula
    return (n * (n - 1)) / 2;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        scanf("%d", &n);

        // Call the handshake function and print the result
        int result = handshake(n);
        printf("%d\n", result);
    }

    return 0;
}


​



