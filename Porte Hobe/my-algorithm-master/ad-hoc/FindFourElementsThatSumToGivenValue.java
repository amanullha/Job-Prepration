package amazon.algorithms.ad_hoc;

import java.util.Arrays;
import java.util.HashMap;
import java.util.LinkedHashMap;

public class FindFourElementsThatSumToGivenValue {
    public static void main(String[] args) {
        int arr[] = {10, 2, 3, 4, 5, 9, 7, 8};
        findFourElementsThatSumToGivenValue(arr, 23);
        System.out.println("==========================");
        find4ElementsThatSumToGivenValue(arr,23);
    }

    //O(n^2logn) solution
    private static void find4ElementsThatSumToGivenValue(int[] arr, int n) {
        class Pair{
            int i,j,sum;
            Pair(int i,int j){this.i = i;this.j = j;}
        }
        HashMap<Integer, Pair> mp = new LinkedHashMap<>();
        for(int i=0;i<arr.length-2;i++){
            for(int j=i+1;j<arr.length-1;j++){
                mp.put(arr[i]+arr[j],new Pair(i,j));
            }
        }

        for(int i=0;i<arr.length-1;i++){
            for(int j=i+1;j<arr.length;j++){
                int sum = arr[i] + arr[j];
                if(mp.containsKey(n-sum)){
                    Pair pair = mp.get(n-sum);
                    if(
                            i != pair.i &&
                                    j != pair.j &&
                                    i != pair.j &&
                                    j != pair.i
                    ){
                        System.out.println(arr[i] + ", " + arr[j] + ", " + arr[pair.i] + ", " + arr[pair.j]);
                    }
                }
            }
        }
//        mp.forEach((t1,t2)->{
////            System.out.println(t1.intValue() + ": " + t2.i+", " + t2.j);
//            if(mp.containsKey(n-t1)){
//                Pair pair = mp.get(n-t1);
//                if(
//                        t2.i != pair.i &&
//                        t2.j != pair.j &&
//                        t2.i != pair.j &&
//                        t2.j != pair.i
//                ){
//                    System.out.println(arr[t2.i] + ", " + arr[t2.j] + ", " + arr[pair.i] + ", " + arr[pair.j]);
//                    mp.remove(t1);
//                    mp.remove(arr[pair.i] + arr[pair.j]);
//                }
//            }
//        });

    }

    //O(n^3) solution
    private static void findFourElementsThatSumToGivenValue(int[] arr, int n) {

        Arrays.sort(arr);

        for (int i = 0; i < arr.length - 3; i++) {
            for (int j = i + 1; j < arr.length - 2; j++) {
                int l = j + 1;
                int r = arr.length - 1;
                while (l < r) {
                    if (arr[i] + arr[j] + arr[l] + arr[r] == n) {
                        System.out.println(arr[i] + ", " + arr[j] + ", " + arr[l] + ", " + arr[r]);
                        l++;
                        r--;

                    } else if (arr[i] + arr[j] + arr[l] + arr[l] < n) {
                        l++;
                    } else {
                        r --;
                    }
                }
            }
        }
    }



}
