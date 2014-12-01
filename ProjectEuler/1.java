import java.lang.System;
class Problem1 {
    private static final int MAX = 1000;

    public static void main(String[] args) {
        int mSum = 0;
        for (int i = 3; i < MAX; i++) {
            if (i % 3 == 0 || i % 5 == 0) {
                mSum += i;
            }
        }
        System.out.println(mSum);
    }
}
