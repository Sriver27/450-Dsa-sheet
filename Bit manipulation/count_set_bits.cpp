// Brute Force : Loop through all the bits in the number, if the bit is found to be set, then increment count .
// TC : O(log n)

//  while (n) {
//         count += n & 1;
//         n >>= 1;
//     }




// Recursive solution 
// TC : O(log n)

// int countSetBits(int n)
// {
//     // base case
//     if (n == 0)
//         return 0;
//     else
//         // if last bit set add 1 else add 0
//         return (n & 1) + countSetBits(n >> 1);
// }




// Optimised and better solution 
// TC : O(log n)

//  while (n) {
//             n &= (n - 1);
//             count++;
//         }

