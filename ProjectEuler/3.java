import java.lang.System;

class Problem3 {
    private static final long NUM = 600851475143L;

    public static void main(String[] args) {
        long current = NUM;
        long result = 0;
        for (long i = 2; i <= current; i++ ) {
            while (current % i == 0) {
                current /= i;
                result = i;
            }
        }
        if (0 != result) {
            System.out.println(result);
        } else {
            System.out.println(NUM);
        }

    }


}
