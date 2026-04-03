class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int left=0,right=k-1,white=0,minn=101;
        for(int i=0;i<k;i++) if(blocks[i]=='W') white++;
        minn = min(minn,white);
        while(right<blocks.size()){
           right++;
           if(right==blocks.size()) break;
           if(blocks[right]=='W') white++;
           if(left<blocks.size() && blocks[left]=='W') white--;
           left++;
           minn = min(minn,white);
        }
        return minn;
    }
};