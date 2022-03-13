package amazon.algorithms.ad_hoc;

public class LargestSumContiguousSubarray {
    public static void kadaneLargestSumContiguousSubarray(int arr[]){
        int max_so_far = 0, max_ending_here = 0;
        for(int i=0;i<arr.length;i++){
            max_ending_here = max_ending_here + arr[i];
            if(max_ending_here<0)max_ending_here = 0;
            if(max_so_far < max_ending_here)max_so_far = max_ending_here;
        }
        System.out.println(max_so_far);

    }
    public static void main(String[] args){
        int arr[] = {-2, -3, 4, -1, -2, 1, 5, 3};
        kadaneLargestSumContiguousSubarray(arr);

    }
}
