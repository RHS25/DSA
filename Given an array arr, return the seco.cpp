Given an array arr, return the second largest element from an array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the first largest.

Examples:

Input: arr = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.
Input: arr = [10, 10]
Output: -1
Explanation: The largest element of the array is 10 and the second largest element does not exist..
Constraints:
2 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105


Solution:
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int max1=arr[0];
        int max2=arr[0];
        for(int i: arr)
        {
            if(max2<i&&max1>i)
            {
                max2=i;
            }
            else if(i<max1&&max1==max2)
            {
                max2=i;
            }
            else if(i>max1)
            {
                max2=max1;
                max1=i;
            }
        }
        if(max1==max2) return -1;
        return max2;
    }
};