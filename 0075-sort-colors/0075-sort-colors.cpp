class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){// middle part no change just mid aage bada do
             mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--; // beech mai 2 hai toh high ke just pehle lagna hai toh high ko ek pehle kar do wah 2 dal do so high>> high--
            }
        }
    }
};

// dutch national flag algorithm 
// most optimal >> O(n)

/*

Intuition
The problem requires us to sort an array of integers representing colors in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue. We are given that the colors red, white, and blue are represented by the integers 0, 1, and 2 respectively.

Approach : Dutch National Flag algorithm
The Dutch National Flag algorithm, also known as 3-way partitioning, is an algorithm for sorting an array containing three distinct values. The algorithm was designed to solve the problem of sorting an array containing only 0s, 1s, and 2s, which is similar to the problem in the given question.

The algorithm works by maintaining three pointers: low, mid, and high. The low pointer points to the beginning of the array, the high pointer points to the end of the array, and the mid pointer starts at the beginning of the array and moves through it.

The idea behind the algorithm is to keep all the 0s before the low pointer, all the 2s after the high pointer, and all the 1s between the low and high pointers. The algorithm moves the mid pointer through the array, comparing the value at each position with 1. If the value is 0, the element is swapped with the element at the low pointer, and the low and mid pointers are incremented. If the value is 2, the element is swapped with the element at the high pointer, and the high pointer is decremented. If the value is 1, the mid pointer is simply incremented.

The algorithm terminates when the mid pointer crosses the high pointer, indicating that all the elements have been processed and the array is sorted.

The Dutch National Flag algorithm is called one-pass because it sorts the array in a single pass through the elements. The time complexity of the algorithm is O(n), where n is the size of the array.

Complexity
Time complexity: O(n)
Space complexity: O(1)


*/