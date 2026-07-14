class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> posspeed;
        // pos, speed

        for (int i = 0; i < position.size(); ++i) {
            posspeed.push_back({position[i], speed[i]});
        }

        sort(posspeed.rbegin(), posspeed.rend());

        

        stack<double> stk;
        stk.push((target - posspeed[0].first) / posspeed[0].second);

        for (auto elem : posspeed) {
            double time = (double)(target - elem.first) / elem.second;

            if (time <= stk.top()) {
                continue;
            } else if (time > stk.top()) {
                stk.push(time);
            }
        }
        return stk.size();
    }
};
