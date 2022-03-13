package amazon.algorithms.ad_hoc;

import java.util.Arrays;

public class TwoElementsSumCloseToZero {


    public static void main(String[] args){
        int[] arr =  {1, 60, -10, 70, -80, 85};
        printTwoElementsSumCloseToZero(arr);
    }

    private static void printTwoElementsSumCloseToZero(int[] arr) {
        int first=-1, second=-1, min = Integer.MAX_VALUE;

        Arrays.sort(arr);
        for(int i=0;i<arr.length;i++){
            if(arr[i] + arr[arr.length-1-i]<min){
                min = arr[i] + arr[arr.length-1-i];
                first = arr[i];
                second = arr[arr.length-1-i];
            }
        }
        System.out.println("first: " + first + ", second: " + second);

    }


}
