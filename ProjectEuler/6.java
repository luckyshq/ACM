import java.lang.System;
import java.lang.Math;

class Problem6{
    private static final int MAX = 100;
    private static final int SQUARE = 2;



    public static void main(String[] args) {
        long start = System.currentTimeMillis();

        int sumOfSquares = 0;
        int squaresOfSum = 0;
        for (int i = 1; i <= MAX; i++) {
            sumOfSquares += (int)Math.pow(i, SQUARE);
            squaresOfSum += i;
        }
        squaresOfSum = (int)Math.pow(squaresOfSum, SQUARE);

        System.out.println("Sum of squares is : " + sumOfSquares);
        System.out.println("Square of sum is : " + squaresOfSum);

        System.out.println("Difference is : " + (squaresOfSum - sumOfSquares));

        long end = System.currentTimeMillis();
        System.out.println("During Time is: "+ String.valueOf(end - start) + "mm");
    }


}
