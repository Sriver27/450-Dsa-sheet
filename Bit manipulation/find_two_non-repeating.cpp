// Method 1(Use Sorting) 
// First, sort all the elements. In the sorted array, by comparing adjacent elements we can easily get the non-repeating elements. Time complexity of this method is O(nLogn)



// Method 2(Use XOR) 
// Let x and y be the non-repeating elements we are looking for and arr[] be the input array. First, calculate the XOR of all the array elements. 
// Find the first differnciating bit in both x and y and then group elements in two groups using that differenciating bit. 
// Finally take xor and find the two non-repeating elements
//TC : O(n)

// void get2NonRepeatingNos(int arr[], int n, int* x, int* y)
// {
//     /* Will hold Xor of all elements */
//     int Xor = arr[0];
 
//     /* Will have only single set bit of Xor */
//     int set_bit_no;
//     int i;
//     *x = 0;
//     *y = 0;
 
//     /* Get the Xor of all elements */
//     for (i = 1; i < n; i++)
//         Xor ^= arr[i];
 
//     /* Get the rightmost set bit in set_bit_no */
//     set_bit_no = Xor & ~(Xor - 1);
 
//     /* Now divide elements in two sets by
//     comparing rightmost set bit of Xor with bit
//     at same position in each element. */
//     for (i = 0; i < n; i++) {
 
//         /*Xor of first set */
//         if (arr[i] & set_bit_no)
//             *x = *x ^ arr[i];
//         /*Xor of second set*/
//         else {
//             *y = *y ^ arr[i];
//         }
//     }
// }




//Method 3(Using Map)
//TC : O(nlogn)

// void get2NonRepeatingNos(int arr[], int n)
// {
//     /*Create map and calculate frequency of array
//        elements.*/
 
//     map<int, int> m;
//     for (int i = 0; i < n; i++) {
//         m[arr[i]]++;
//     }
 
//     /*Traverse through the map and check if its second
//       element that is the frequency is 1 or not. If this is
//       1 than it is the non-repeating element print it.It is
//       clearly mentioned in problem that all numbers except
//       two are repeated once. So they will be printed*/
 
//     cout << "The non-repeating elements are ";
//     for (auto& x : m) {
//         if (x.second == 1) {
//             cout << x.first << " ";
//         }
//     }
// }