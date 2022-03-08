// problem link: https://practice.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1

function trailingZeroes(N) {


    let c = 0;
    while (N > 0) {
        N = parseInt(N / 5);
        c += N;
    }

    return c;
}