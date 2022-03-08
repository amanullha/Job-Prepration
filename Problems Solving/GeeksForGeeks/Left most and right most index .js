// v->Array
// x-> find first and last index number of the occerance of x

function indexes(v, x) {
    let a = -1, b = -1;
    for (let i = 0; i < v.length; i++) {
        if (v[i] == x) {
            if (a == -1) a = i;
            b = i;
        }
    }

    if (a == -1) {
        return [-1, -1];
    }
    else {
        return [a, b];
    }
}