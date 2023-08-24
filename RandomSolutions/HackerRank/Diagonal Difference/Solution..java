import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

class Result {


    public static int diagonalDifference(List<List<Integer>> arr) {
    //A matrix contains rows and colums are equal, so you can get the max size by * the list size by itself

    int arraySize = arr.size();
    int totalSize = arraySize * arraySize;
    int rightToLeft = 0;
    int leftToRight = 0;
    ArrayList<Integer> intList = new ArrayList<>();

         for(List<Integer> list : arr){
            for(int i : list){
                intList.add(i);
        }

     }

        //Right to left
        for(int i = arraySize - 1; i < totalSize - 1; i = i + arraySize - 1){
            rightToLeft += intList.get(i);
        }
        //LeftToRight
         for(int i = 0; i < totalSize; i = i + arraySize + 1){
             leftToRight += intList.get(i);
         }

    return Math.abs(rightToLeft - leftToRight);


    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        List<List<Integer>> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String[] arrRowTempItems = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

            List<Integer> arrRowItems = new ArrayList<>();

            for (int j = 0; j < n; j++) {
                int arrItem = Integer.parseInt(arrRowTempItems[j]);
                arrRowItems.add(arrItem);
            }

            arr.add(arrRowItems);
        }

        int result = Result.diagonalDifference(arr);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
