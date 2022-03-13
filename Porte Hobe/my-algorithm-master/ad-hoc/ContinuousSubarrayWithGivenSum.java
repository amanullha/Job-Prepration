package amazon.algorithms.ad_hoc;

public class ContinuousSubarrayWithGivenSum {
    public static void main(String[] args) {
        int arr[] = {1, 4, 20, 3, 10, 5,8};
        continuousSubarrayWithGivenSum(arr,33);
    }

    private static void continuousSubarrayWithGivenSum(int[] arr, int n) {
        int currentSum = arr[0], start = 0;
        for(int i=1;i<arr.length;i++){
            while(currentSum>n && start < arr.length-1){
                currentSum = currentSum - arr[start];
                start++;
            }

            if(currentSum == n){
                System.out.println("start: " + start + ", end:" + (i-1));
                return;
            }
            currentSum = currentSum + arr[i];
        }

        System.out.println("No subarray found!!");
        return;
    }
}
