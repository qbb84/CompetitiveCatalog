import java.util.Scanner;

public class YuraNewName {

    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int i = 0;
        int amountOfTest = scanner.nextInt();
        while(i < amountOfTest) {
            int val = getSmileyNeeded(scanner.next());
            System.out.println(val);
            i++;
        }

        }

    public static int getSmileyNeeded(String s){
        int totalCountNeeded = 0;
        int i = 0;

        if(s.charAt(0) == '_' && s.length() == 1) return 2;
        if(s.charAt(0) == '^' && s.length() == 1) return 1;
        if(s.charAt(0) == '_' && s.charAt(1) != '^'){
            totalCountNeeded+=2; i = 1;
        }else if(s.charAt(0) == '_' && s.charAt(1) == '^') totalCountNeeded+=1; i = 1;
        if(s.charAt(s.length() - 1) == '_') totalCountNeeded++;

        for(; i < s.length() - 1; i++){
           if(s.charAt(i) == '_'){
               if(s.charAt(i + 1) != '^'){
                    totalCountNeeded++;
               }

           }
        }

        return totalCountNeeded;
    }
}
