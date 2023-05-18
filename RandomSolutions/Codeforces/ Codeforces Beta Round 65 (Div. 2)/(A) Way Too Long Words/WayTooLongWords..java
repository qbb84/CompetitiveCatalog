import java.util.Scanner;

public class WayTooLongWords {

    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);
        int i = 0;
        int j = scanner.nextInt();
        while (i < j){
            i++;
            wordAbbreviate(scanner.next());

        }
    }
    public static void wordAbbreviate(String s){
        if(s.length() > 10) {
            char f = s.charAt(0), l = s.charAt(s.length() - 1);
            s = String.valueOf(f) + String.valueOf(s.length() - 2) + String.valueOf(l);

        }
        System.out.println(s);

    }
}

