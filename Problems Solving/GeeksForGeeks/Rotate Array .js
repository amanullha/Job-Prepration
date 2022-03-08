// problem link: https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1


var _gcd = function (a, b) {
    if (!b) {
        return a;
    }

    return _gcd(b, a % b);
}

function rotateArr(arr, d, n) {

    /*
    // Method 1
    d = d % n;
    let sol = [];
        for (let i = d; i < n; i = i + 1) {
    
    
            sol.push(arr[i]);
    
        }
        for (let i = 0; i < d; i = i + 1) {
    
    
            sol.push(arr[i]);
    
        }
        */
    // Method 2
    d = d % n;
    let gcd = _gcd(n, d);

    for (let i = 0; i < gcd; i++) {
        let temp = arr[i];

        let j = i;
        while (true) {
            let k = j + d;
            k %= n;

            if (k == i) {
                arr[j] = temp;
                break;
            }
            arr[j] = arr[k];
            j = k;
        }
    }





    for (const x of arr) console.log(x);

}






let N = 5, D = 2;
let arr = [1, 2, 3, 4, 5];
rotateArr(arr, D, N);





