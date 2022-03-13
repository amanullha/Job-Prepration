package amazon.algorithms.ad_hoc;

public class CountNumbersWhichHaveSameFirstAndLastDigits {
    public static void main(String[] args) {
        int start = 7;
        int end = 20;
        int c= 0;
        for(int i=start; i<= end; i++){
            int modNum = count(i);

            // for single digit numbers
//            if(modNum == 1) {
//                c++;
//            }
//            int powTen = Math.pow(10,modNum);9
            // for any digit numbers
//            else
                if(i/modNum == i%10){
                c++;
            }
        }
        System.out.println(c);
    }
    static int count(int n){
        int c = 1;
        while(n!=0){
            n = n/10;
            c*=10;
        }
        return c/10;
    }
}
