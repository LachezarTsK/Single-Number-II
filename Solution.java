
public class Solution {

    public int singleNumber(int[] nums) {

        int occuredOnce = 0;
        int occuredTwice = 0;

        for (int n : nums) {
            occuredOnce = (~occuredTwice) & (occuredOnce ^ n);
            occuredTwice = (~occuredOnce) & (occuredTwice ^ n);
        }

        return occuredOnce;
    }
}
