// problem link: https://practice.geeksforgeeks.org/problems/plus-one/1/#

function increment(arr, n) {
    //code here


    let l = 1;
    for (let i = n - 1; i >= 0; i--) {
        if (arr[i] == 9 && l) {
            arr[i] = 0;
        }
        else if (arr[i] < 9 && l) {
            arr[i]++;
            l = 0;
        }

    }

    if (!l) return arr;
    else {
        arr.unshift(l);
        return arr;

    }


}