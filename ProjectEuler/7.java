import java.lang.System;
import java.lang.Math;

class Problem7{

    private static final int POSITION = 10001;

    public static void main(String[] args) {
        long start = System.currentTimeMillis();

        int prime = getPrimeByPosition(POSITION);

        System.out.println(prime);

        long end = System.currentTimeMillis();
        System.out.println("During Time is: "+ String.valueOf(end - start) + "mm");
    }

    /**
     * 获取前position个质数表
     * @param position 获取的质数个数
     * @return 前position个质数表(index从1开始,即primeList[1]是第一个质数)
     * 由于已经可以确定容器大小,所以就直接建数组,没必要用ArrayList.
     */
    public static int[] getPrimeListByPosition(int position){
        if (position > 0) {
            int positionCount = 1;
            int[] primeList = new int[position + 2];
            primeList[positionCount] = 2;
            for (int i = 3; positionCount <= position; i++){
                int j = 1;
                boolean flag = true;
                for (; primeList[j] * primeList[j] <= i; j++) {
                    if (i % primeList[j] == 0){
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    primeList[++positionCount] = i;
                }
            }

            return primeList;
        } else {
            return null;
        }
    }

     /**
     * 获取第position个质数
     * @param position 获取质数的位置
     * @return 第position个质数
     */
    public static int getPrimeByPosition(int position){
        if (position > 0){
            return getPrimeListByPosition(position)[position];
        } else {
            return 0;
        }
    }
}
