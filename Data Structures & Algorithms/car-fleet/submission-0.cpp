class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        priority_queue<pair<int,double>> cars;
        for(int i=0;i<position.size();i++){
            double time = (double)(target-position[i])/speed[i];
            cars.push({position[i],time});
        }
        double maxtime = 0;
        int fleet = 0;
        while(!cars.empty()){
            double time = cars.top().second;
            cars.pop();
            if(time > maxtime){
                fleet++;
                maxtime = time;
            }
        }
        return fleet;
    }
};
