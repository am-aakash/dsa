class Solution {
    public boolean isAnagram(String s, String t) {
        int hash1 [] = new int[26];
        int hash2 [] = new int[26];
        if(s.length() != t.length()) return false;
        for(int i = 0; i < s.length(); i++) hash1[s.charAt(i)-'a']++;
        for(int i = 0; i < t.length(); i++) hash2[t.charAt(i)-'a']++;
        for(int i = 0; i < s.length(); i++) if(hash1[s.charAt(i)-'a']!=hash2[s.charAt(i)-'a']) return false;
        return true;
    }
}
