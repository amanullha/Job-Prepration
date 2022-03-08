// problem link: https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1

// method 1 with CPP
majorityElement(int a[], int size)
{

    // your code here
    unordered_map < int, int > un;
    for (int i = 0; i < size; i++)
    un[a[i]]++;

    for (auto x:un)
    {
        if (x.second > (size) / 2) return x.first;
    }
    return -1;


}

// method 2
function checkMajorityElement(mostFeq, arr, n) {

    let i = 0;
    for (let x of arr) if (x == mostFeq) i++;
    return i > (n / 2);
}
//using Moore voting algorithm

function findMajorityElement(arr, n) {

    let mostFeq = arr[0];
    let count = 1;

    for (let i = 1; i < n; i++) {
        if (mostFeq != arr[i]) {
            count--;
        }
        else count++;
        if (!count) {
            mostFeq = arr[i];
            count = 1;
        }
    }
    if (checkMajorityElement(mostFeq, arr, n)) return mostFeq;
    else return -1;
}


// const arr = [1, 2, 3];
// const n = 3;
// const x = findMajorityElement(arr, n);
// console.log(x);

const arr = [3, 1, 3, 3, 2];
const n = 5;
const x = findMajorityElement(arr, n);
console.log(x);


