class Solution {
public:
    
    int search(int A[], int n, int target) {
        int low=0,high=n-1,mid;
        while (low<=high) {
            mid=(low+high)/2;
            if (A[mid]==target) {
                return mid;
            }
            if (A[low]<=A[mid]) {
                if (A[low]<=target&&A[mid]>target) {
                    high=mid-1;
                }
                else {
                    low=mid+1;
                }
            } else {
                if (A[mid]<target&&A[high]>=target) {
                    low=mid+1;
                } else {
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};