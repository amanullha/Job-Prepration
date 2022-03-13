package amazon.algorithms.ad_hoc;

public class CountPairsOfNumbersWhoSumLessThanX {
    public static void main(String[] args) {
        int[] a = {1, 2, 3, 5, 7, 10, 12};
        int[] b = {2, 4, 6, 8, 9};
        int x = 14;
        int s = 8;
        System.out.println(countNumberOfPairsInSortedArrayLessThanX(a,s));
        System.out.println(countNumberOfPairsInSortedArrayLessThanX(b,x));
    }

    //in eff
    static int countNumberOfPairs(int[] a, int s){
        int c = 0;
        for(int i= a.length-1; i>=0;i--){
            if(a[i] + a[0] < s){
                int f = 0;
                while(a[i] + a[f] < s && f< i){
                    c++;
//                    System.out.printf("%d + %d < %d\n",a[i], a[f], s);
                    f++;
                }
            }
        }
    return c;
    }

    //eff
    static int countNumberOfPairsInSortedArrayLessThanX(int[] a, int x){
        int count = 0;
        int start = 0;
        int end = a.length -1;
        for(int i=0; i <= end; i++){
            int s = i;
            if(a[s] + a[end] < x){
                count+=end - i;
            }
            else{
                end--;
                i--;
            }
            if(s >= end)break;
        }
        return count;
    }


}
