class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int[] arr = new int[m + n];
        int tempvar = 0;
        int nl = arr.length;

        for(int i = 0; i < m; i++){
            arr[i] = nums1[i];
        }
        for(int j = 0; j < n; j++){
            arr[j + m] = nums2[j];
        }

        for (int i = 0; i < nl-1; i++) {
            for (int j = 0; j < nl-i-1; j++) {
                if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
        for(int i = 0; i < arr.length; i++){
             nums1[i] = arr[i];
        }
    }
}