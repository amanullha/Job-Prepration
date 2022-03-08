// problem link: https://practice.geeksforgeeks.org/problems/minimum-steps-to-make-product-equal-to-one/1/

function makeProductOne(arr, N) {
    let s = 0;
    let n = 0;
    let z = 0;

    for (let i = 0; i < N; i++) {
        let x = arr[i];


        if (x < 0) {
            n++;
            s += (Math.abs(x) - 1);
        }
        else if (!x) {
            z++;
        }
        else if (x > 0) {
            s += (x - 1);

        }

    }


    if ((n & 1) && (!z)) {
        return s + 2;
    }
    else return s + z;

}
