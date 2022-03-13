package amazon.algorithms.ad_hoc;
//given list of n-1 integers & they are in range 1 to n
// efficient code to find missing number
public class findMissingNumber {
    static int findMissing(int[] a){
        int n = a.length,sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        return ((n+1)*(n+2)) / 2 - sum;
    }
    // another solution is by doing xor operation
    // x = A ⓧ B ⓧ C
    // y = A ⓧ B ⓧ C ⓧ D
    // z = x ⓧ z = D

    public static void main(String[] args){
        int a[] = {1,2,4,6,3,7,8};
        System.out.println(findMissing(a));
    }
}
