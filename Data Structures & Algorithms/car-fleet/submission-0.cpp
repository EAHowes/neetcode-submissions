class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        int out = 0;
        set<int> ntimes;

        for (int i = 0; i < position.size(); i++) {
            ntimes.insert((target - position[i]) / speed[i]);
        }

        return ntimes.size();

    }
};



// pos
// speed

// time = (target - position) / speed

// set.insert(time)

// return set.count;