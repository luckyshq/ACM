import java.lang.System;
import java.lang.Math;
import java.io.FileReader;
import java.io.IOException;

class Problem8{

    public static void main(String[] args) {
        long start = System.currentTimeMillis();

        int[] number = new int[1001];
        int count = 0;
        int tmp = 0;
        try{
            FileReader reader = new FileReader("Problem8.txt");
            tmp = reader.read();
            while (tmp != -1) {
                number[count++] = tmp - 48;
                tmp = reader.read();
            }
            reader.close();
        } catch(Exception e){
            e.printStackTrace();
        }

        //数字超过了int,得用long.
        long max = 0;
        for (int i = 0; i < 1000 - 13; i++) {
            long tmpMax = 1;
            for (int j = 0; j < 13 ; j++) {
                tmpMax *= number[i + j];
            }
            if (tmpMax > max) {
                max = tmpMax;
            }
        }

        System.out.println(max);

        long end = System.currentTimeMillis();
        System.out.println("During Time is: "+ String.valueOf(end - start) + "mm");
    }
}
