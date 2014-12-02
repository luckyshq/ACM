import java.lang.System;
import java.lang.Math;

class Problem5 {
    private static final int MIN = 1;
    private static final int MAX = 20;

    private static final int PRIME_FLAG = 0;
    private static final int NUM_COUNT = 1;
    private static final int IS_PRIME = 0;
    private static final int NOT_PRIME = 1;

    public static void main(String[] args) {
        long start = System.currentTimeMillis();

        //第一位存是否为质数,第二位需要的最小个数
        int[][] factors = new int[MAX + 1][2];

        //构造出现次数的数组
        for (int i = MIN; i <= MAX ; i++ ) {
            factors[i][NUM_COUNT] = 1;

            if (isPrimeNumber(i)) {
                factors[i][PRIME_FLAG] = IS_PRIME;
                continue;
            }

            factors[i][PRIME_FLAG] = NOT_PRIME;
            for (int j = i - 1; j > 1 ; j-- ) {
                if (NOT_PRIME == factors[j][PRIME_FLAG]) {
                    continue;
                }
                int tmp = 0;
                int tmpI = i;
                while (i % j == 0) {
                    tmp++;
                    i /= j;
                }
                i = tmpI;
                if (tmp > factors[j][NUM_COUNT]) {
                    factors[j][NUM_COUNT] = tmp;
                }
            }
        }

        long sum = 1;

        //提取次数,并计算乘积
        for (int i = MIN; i <= MAX ; i++ ) {
            if (NOT_PRIME == factors[i][PRIME_FLAG]) {
                continue;
            }


            sum = sum * (long)Math.pow(i, factors[i][NUM_COUNT]);
        }

        System.out.println("sum is: " + String.valueOf(sum));

        for (int i = MIN; i <= MAX ; i++) {
            System.out.println(i + ": " + factors[i][PRIME_FLAG] + " " + factors[i][NUM_COUNT]);
        }

        long end = System.currentTimeMillis();

        System.out.println("During Time is: "+ String.valueOf(end - start) + "mｓ");
    }


    /**
     * 判断一个数字是不是质数
     * @param number 要判断的数字
     * @return true:是 false:否
     */
    private static boolean isPrimeNumber(int number){
        if (2 == number || number % 2 != 0){
            int sqrt = (int) Math.sqrt(number);
            for (int i = 3; i <= sqrt; i++){
                if (number % i == 0) {
                    return false;
                }
            }
            return true;
        }
        return false;
    }

}
