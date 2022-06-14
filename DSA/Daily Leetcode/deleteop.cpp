class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word2.size(),n=word1.size();
        vector<int>pre(m+1),cur(m+1);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(word1[i]==word2[j]){
                    cur[j+1]=pre[j]+1;
                }
                else{
                    cur[j+1]=max(pre[j+1],cur[j]);
                }
            }
            pre=cur;
        }
        return m+n-2*cur[m];
    }
};
/*
Given two strings word1 and word2, return the minimum number of steps required to make word1 and word2 the same.

In one step, you can delete exactly one character in either string.

 

Example 1:

Input: word1 = "sea", word2 = "eat"
Output: 2
Explanation: You need one step to make "sea" to "ea" and another step to make "eat" to "ea".
Example 2:

Input: word1 = "leetcode", word2 = "etco"
Output: 4
*/