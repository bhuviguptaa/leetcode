/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function(nums) {
    let sum = 0;
    return nums.reduce((res, curr)=>{
        sum+=curr;
        res.push(sum);
        return res;
    }, []);
};