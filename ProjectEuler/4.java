import java.lang.System;

class Problem4 {
    private static final int MAX = 999;
    private static final int MIN = 100;

    public static void main(String[] args) {
        long start = System.currentTimeMillis();
        int current = MAX * MAX;
        int max = 0;
        for (int i = MAX; i >= MIN; i--) {
            for (int j = MAX; j >= MIN; j--) {
                current = i * j;
                if (isPalindromic(current)) {
                    if (current > max) {
                        max = current;
                    }
                }
            }
        }
        long end = System.currentTimeMillis();
        System.out.println(max);
        System.out.println("During time is: " + String.valueOf(end - start) + "mｓ");
    }

    private static boolean isPalindromic(int number){
        int digit = getDigit(number);
        if (digit % 2 != 0) {
            return false;
        }
        int[] numberArray = new int[digit];
        for (int i = 0; i < digit; i++) {
            numberArray[i] = number % 10;
            number /= 10;
        }
        for (int i = 0; i < digit / 2; i++) {
            if (numberArray[i] != numberArray[digit - 1 - i]) {
                return false;
            }
        }
        return true;
    }

    private static int getDigit(int number){
        int digit = 0;
        while (0 != number) {
            digit++;
            number /= 10;
        }
        return digit;
    }

}
