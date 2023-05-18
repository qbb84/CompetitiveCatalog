class Solution {
    public int maximumWealth(int[][] accounts) {
        int[] sum = new int[accounts.length];
        ArrayList<Integer> list = new ArrayList();

        for(int i = 0; i < accounts.length; i++){
            for(int j = 0; j < accounts[i].length; j++){
                   list.add(sum[i] += accounts[i][j]);
                }
        }

        return Collections.max(list);
    }
}