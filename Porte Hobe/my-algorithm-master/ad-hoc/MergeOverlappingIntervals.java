package amazon.algorithms.ad_hoc;

import java.util.Collections;
import java.util.Vector;

public class MergeOverlappingIntervals {
    public static void main(String[] args) {
        Vector<Pair> list = new Vector<>();
        list.add(new Pair(6, 8));
        list.add(new Pair(1, 3));
        list.add(new Pair(4, 7));
        list.add(new Pair(2, 4));

//        list.forEach(System.out::println);
        Collections.sort(list, (a, b) -> a.first - b.first);
        System.out.println("========================");
//        list.forEach(System.out::println);
        mergeOverlappingIntervals(list);

    }

    static Vector<Pair> mergeOverlappingIntervals(Vector<Pair> list) {
        Vector<Pair> result = new Vector<>();
        if(list.isEmpty())return null;
        int first = list.get(0).first;
        int second = list.get(0).second;

        for(int i=1;i<list.size();i++){
            if(list.get(i).first <= second){
                second = list.get(i).second;
            }else{
                result.add(new Pair(first,second));
                first = list.get(i).first;
                second = list.get(i).second;
            }
        }
        result.add(new Pair(first,second));
        result.forEach(System.out::println);
        return result;
    }

    static class Pair {
        int first;
        int second;

        Pair(int first, int second) {
            this.first = first;
            this.second = second;
        }

        @Override
        public String toString() {
            return this.first + " " + this.second;
        }
    }
}
