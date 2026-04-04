class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int max=0,sum=0,leftk=0,rightk=minutes-1,left=0,right=minutes-1;
        for(int i=0;i<=rightk;i++) if(grumpy[i]==1) sum+=customers[i];
        max=sum;
        while(right<customers.size() && left<customers.size()){
            right++;
            if(right>=customers.size()) break;
            if(grumpy[right]==1) sum+=customers[right];
            if(grumpy[left]==1) sum-=customers[left];
            left++;
            if(sum>max){
                max=sum;
                leftk=left;
                rightk=right;
            } 
        }
        for(int i=leftk;i<=rightk;i++) if(grumpy[i]==1) grumpy[i]=0;
        sum=0;
        for(int i=0;i<grumpy.size();i++) if(grumpy[i]==0) sum+=customers[i];
        return sum;
    }
};