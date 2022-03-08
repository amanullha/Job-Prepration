// problems link: https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1


function MissingNumber(array, n) {

    // Method : 01
    //   let sum=(n*(n+1))/2;
    //     for(let x of array)sum-=x;
    //     return sum;

    // Method: 02
    let x = 1;
    for (let i = 2; i <= n; i++)x ^= i;
    for (let p of array) x ^= p;
    return x;


}

console.log(MissingNumber([1, 2, 3, 4, 5, 6, 7, 8, 10

], 10));