https://leetcode.com/problems/jewels-and-stones/
class Solution {
    public:
     int numJewelsInStones(string jewels, string stones) {
        HashMap<char, int> hm = new hm<>();
        for(char ch : stones.toCharArray())
            hm.put(ch,hm.getOrDefault(ch,0)+1);
        int res=0;
        for(char ch : jewels.toCharArray())
            res+=hm.getOrDefault(ch,0);
        return res;
    }
}
