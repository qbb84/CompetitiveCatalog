class Solution {
    public int numberOfSteps(int num) {
        int count = 0;

        if(num == 0) return 0;

        do{
            if(num % 2 == 0){
            num = num / 2;
            num = num;
            count++;
            }
            if(num % 2 != 0){
            num = num - 1;
            num = num;
            count++;
            }
        }while(num > 0);

        return count;
    }
}