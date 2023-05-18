class Solution {
    public int findNumbers(int[] nums) {
        int count = 0;

    for (int num : nums) {
        int numDigits = 0;
        while (num > 0) {
            num /= 10;
            numDigits++;
        }
        if (numDigits % 2 == 0) {
            count++;
        }
    }

    return count;
    }
}

       