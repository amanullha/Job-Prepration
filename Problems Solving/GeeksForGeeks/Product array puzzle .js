function productExceptSelf(nums, n) {
    //code 
    //vector<long long int>temp1(n,1),temp2(n,1);

    let temp1 = [];
    let temp2 = [];


    for (let i = 0; i < n; i++) {
        temp1.push(1);
        temp2.push(1);
    }

    for (let i = 1; i < n; i++) {
        temp1[i] = temp1[i - 1] * nums[i - 1];

    }
    for (let i = n - 2; i >= 0; i--) {


        temp2[i] = temp2[i + 1] * nums[i + 1];
    }



    for (let i = 0; i < n; i++) {

        nums[i] = temp1[i] * temp2[i];
    }

    return nums;
}
