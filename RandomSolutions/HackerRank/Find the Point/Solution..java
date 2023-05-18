import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

class Result {

    /*
     * Complete the 'findPoint' function below.
     *
     * The function is expected to return an INTEGER_ARRAY.
     * The function accepts following parameters:
     *  1. INTEGER px
     *  2. INTEGER py
     *  3. INTEGER qx
     *  4. INTEGER qy
     */

    public static List<Integer> findPoint(int px, int py, int qx, int qy) {

        return new ArrayList<Integer>(Arrays.asList((qx << 1) - px, (qy << 1) - py));

    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        for (int nItr = 0; nItr < n; nItr++) {
            String[] firstMultipleInput = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

            int px = Integer.parseInt(firstMultipleInput[0]);

            int py = Integer.parseInt(firstMultipleInput[1]);

            int qx = Integer.parseInt(firstMultipleInput[2]);

            int qy = Integer.parseInt(firstMultipleInput[3]);

            List<Integer> result = Result.findPoint(px, py, qx, qy);

            for (int i = 0; i < result.size(); i++) {
                bufferedWriter.write(String.valueOf(result.get(i)));

                if (i != result.size() - 1) {
                    bufferedWriter.write(" ");
                }
            }

            bufferedWriter.newLine();
        }

        bufferedReader.close();
        bufferedWriter.close();
    }
}
