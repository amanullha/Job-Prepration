package amazon.algorithms.ad_hoc;
/*
'n' bags containing different amount of chocolates and there is wizard
and a kid. At every second the kid eats all the chocolates from bag containing maximum numbers
of chocolates and the wizard refils it with half the chocolates it was
containing earlier. Find how many chocolates has the kid eaten at t second

 */
import java.util.*;
public class NbagsWithChocolateHowManyChocolatesTheKidEaten {
    public static void main(String[] args) {
        int n = 5;
        int b[] = {10, 24, 6, 8, 20};
        int t = 3;

        System.out.println(howManyChocloateEaten(b,n,t));
    }

    private static int howManyChocloateEaten(int[] b, int n, int t) {
        int count = 0;
        PriorityQueue<Integer> pq = new PriorityQueue<>((x,y) -> y-x);
        for(int i = 0; i < n; i++){
            pq.add(b[i]);
        }

        for(int i = 0; i < t; i++){
            count+=pq.peek();
            int top = pq.poll();
//            System.out.println(" top: " + top);
            pq.add(top/2);
        }
        return count;
    }

    static void practicePriorityQueue(){
        PriorityQueue<Integer> pq = new PriorityQueue<>((x,y) -> y-x);
        pq.add(10);
        pq.add(15);
        pq.add(25);
        pq.add(5);
        pq.add(35);
//        System.out.println(pq.peek());
        while(!pq.isEmpty()){
            Integer top = pq.poll();
            System.out.println(top);
        }
    }
}
