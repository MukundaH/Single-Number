int singleNumber(int* nums, int numsSize){
    int n;
    for(int i=0; i<numsSize; i++){
        int s=0;
        for(int j=0; j<numsSize; j++){
            if(i==j){
                continue;
            }
            else{
                if(nums[i]==nums[j]){
                    s=1;
                    break;
                }
            }
        }
        if(s==0){
            n=nums[i];
            break;
        }
    }
    return n;
}