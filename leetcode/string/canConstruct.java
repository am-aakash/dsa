class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        int hash1 [] = new int[26];
        int hash2 [] = new int[26];
        for(int i = 0; i < ransomNote.length(); i++) hash1[ransomNote.charAt(i)-'a']++;
        for(int i = 0; i < magazine.length(); i++) hash2[magazine.charAt(i)-'a']++;
        for(int i = 0; i < ransomNote.length(); i++) 
            if(hash1[ransomNote.charAt(i)-'a']>hash2[ransomNote.charAt(i)-'a']) return false;
        return true;
    }
}
