
#include <vector>
using namespace std;

class Solution {
    
public:

    int singleNumber(vector<int>& nums) {

        int occuredOnce = 0;
        int occuredTwice = 0;

        for (const auto& n : nums) {
            occuredOnce = (~occuredTwice) & (occuredOnce ^ n);
            occuredTwice = (~occuredOnce) & (occuredTwice ^ n);
        }

        return occuredOnce;
    }
};
