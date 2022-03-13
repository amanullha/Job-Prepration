package amazon.algorithms.ad_hoc;

import java.util.Arrays;

public class MoveAllZeroToEndOfArray {
    static void moveAllZeroToEndOfArray(int arr[]){
        int idx = 0, i = 0;
        while(i< arr.length){
            if(arr[i]!=0){
                arr[idx++] = arr[i];
            }
            i++;
        }
        while(idx<arr.length){
            arr[idx++] = 0;
        }
    }

    public static void main(String[] args) {
        int arr[] = {1, 3, 0, 0, 2, 0, 1, 5, 7};
        System.out.println("Before Move:");
        Arrays.stream(arr).forEach(System.out::println);
        moveAllZeroToEndOfArray(arr);
        System.out.println("After Move:");
        Arrays.stream(arr).forEach(System.out::println);

    }
}
