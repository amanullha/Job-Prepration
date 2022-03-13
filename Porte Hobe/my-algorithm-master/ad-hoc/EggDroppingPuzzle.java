package amazon.algorithms.ad_hoc;

public class EggDroppingPuzzle {
    static int eggDrop(int n, int k){
        int eggFloor[][] = new int[n+1][k+1];

        //for first floor
        for(int i=1;i<=n;i++){
            eggFloor[i][1] = 1;
            eggFloor[i][0] = 0; // if zero floor then zero trial
        }

        //for one egg
        for(int i=1;i<=k;i++){
            eggFloor[1][i] = i;
        }

        for(int i=2;i<=n;i++){
            for(int j=2; j <= k; j++){
                eggFloor[i][j] = Integer.MAX_VALUE;
                for(int x=1;x<=j;x++){
                    int res = 1+  Math.max(
                            eggFloor[i-1][x-1], // if egg breaks
                            eggFloor[i][j-x] // if egg doesn't break
                    );
                    if(res<eggFloor[i][j]){
                         eggFloor[i][j] =res;
                    }
                }
            }
        }

        return eggFloor[n][k];
    }
    public static void main(String[] args){
        int n=2, k = 100;
        System.out.printf("%d",eggDrop(n,k));
    }
}
