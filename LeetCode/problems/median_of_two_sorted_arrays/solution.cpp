class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){ 
        // Create a single sorted by merging two sorted arrays
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;
        int j=0;
        int lastindex=-1;
             
        // Initialize a new array
        vector<int>v(n1+n2,0); 
        while(i<n1&&j<n2)
        {
            if(nums1[i]<=nums2[j])
                v[++lastindex]=nums1[i++];
            else
                v[++lastindex]=nums2[j++];
        }
        
        while(i<n1)
            v[++lastindex]=nums1[i++];
        while(j<n2)
            v[++lastindex]=nums2[j++];
        
    // Return the result
        int n=n1+n2;
        return n%2?v[n/2]:(v[n/2]+v[n/2-1])/2.0;
        
    }
};



// void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i=m-1;
//         int j=n-1;
//         int k=m+n-1;
//         while(i>=0 &&j>=0){
//             if(nums1[i]>nums2[j]){
//                 nums1[k--]=nums1[i--];
//             }
//             else{
//                 nums1[k--]=nums2[j--];
//             }
//         }
//         while(i>=0){
//             nums1[k--]=nums1[i--];

//         }
//         while(j>=0){
//             nums1[k--]=nums2[j--];
//         }
//     }
// };