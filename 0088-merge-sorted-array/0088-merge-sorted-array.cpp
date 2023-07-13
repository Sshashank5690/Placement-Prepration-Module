class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
     int left = m-1; // left mai sabse bada element
     int right = 0; // right mai smallest element

     while(left >= 0 && right < n){
         if(nums1[left] > nums2[right]){  // largest element shoul be on right side and chota wal on left side so swap
             swap(nums1[left],nums2[right]);
             left--; // left peechr jayega
             right++;  // right aage
         }
         else 
         {
             break;
         }
     }

     // sort both of them and merge
        sort(nums1.begin(), nums1.begin()+m); // Sorting till m^th index
        sort(nums2.begin(), nums2.end());

        for(int i=m; i<m+n; i++){ // nums1 mai add hoga
            nums1[i] = nums2[i-m];
        }
    }
};