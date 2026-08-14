class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int diffbtwgasncost = 0,tank = 0,start = 0;
        for(int i=0;i<gas.size();i++){
            diffbtwgasncost += (gas[i] - cost[i]);
            tank += (gas[i] - cost[i]);
            if(tank<0){
                start = i+1;
                tank = 0;
            }
        }
        return diffbtwgasncost >= 0 ? start : -1;
    }
};
