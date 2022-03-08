function findMaximum(arr, n) {
    let m1 = arr[0], m2 = arr[n - 1], m3 = -1;

    for (let i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1] && m3 == -1) m3 = arr[i];
    }

    return Math.max(m1, m2, m3);
}