class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        int len=letters.length;
        int targetasc= (int)target;
        for(int i=0;i<len;i++){

            if((int)letters[i]>targetasc){
                return letters[i];
            }
        }
    return letters[0];
    }
}
