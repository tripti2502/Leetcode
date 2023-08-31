class Solution {
public:
	int jump(vector<int>& nums) {
		int far=0;
		int res=0;
		int maxAns=0;
		for(int i=0;i<nums.size()-1;i++){
			maxAns=max(maxAns,i+nums[i]);
			if(far<=i){
				res++;
				far=maxAns;
				maxAns=0;
			}
		}
		return res;
	}
};