class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        ArrayList<Character> list = new ArrayList();

        for(char c : ransomNote.toCharArray()){
            list.add(c);
        }

        for(char i : magazine.toCharArray()){
            for(int j = 0; j< list.size(); j++){
                if(list.get(j) == i){
                    list.remove(j);
                }

            }

        }

       return list.isEmpty();
    }
}