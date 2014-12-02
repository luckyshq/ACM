import java.lang.System;

class Problem2 {
    private static final int MAX = 4000000;

    public static void main(String[] args) {
        int front = 1;
        int end = 2;
        int sum = 1;
        int buff = 0;
        while (MAX >= end) {
            if (end % 2 == 0) {
                sum += end;
            }
            buff = front;
            front = end;
            end += buff;
        }
        System.out.println(sum - 1);
    }
    
}
