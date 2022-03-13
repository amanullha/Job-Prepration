package amazon.algorithms.ad_hoc;
import java.util.*;
public class NextGreaterElement {
    static void nextGreaterElement(int arr[]){
        if(arr.length==0) return;
        Stack<Integer> stack = new Stack();
        stack.push(arr[0]);
        for(int i=1;i<arr.length;i++){
            if(arr[i]>stack.peek()){
                int stackTop = stack.pop();
                while(arr[i] > stackTop) {
                    System.out.printf("%d -> %d\n", stackTop, arr[i]);
                    if(!stack.isEmpty()){
                        stackTop = stack.pop();
                    }else{
                        break;
                    }
                }
                stack.push(arr[i]);
            }
            else{
                stack.push(arr[i]);
            }
        }
        while(!stack.empty()){
            System.out.printf("%d -> %d\n",stack.pop(),-1);
        }
    }
    public static void main(String[] args) {
        int arr[] = {4, 5, 2, 25};
        nextGreaterElement(arr);
    }
}
