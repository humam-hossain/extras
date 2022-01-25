import java.util.Scanner;

public class Hello{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        //Variable types supported by swith statements :char , byte , short , int and String
        System.out.println("Enter your instructions: ");
        String text = input.nextLine();

        switch(text) {
        case "run": 
            System.out.println("Program is running");
            break;
        case "stop":
            System.out.println("Program stopped");
            break;
        default: 
             System.out.println("Instruction not recognized");
        

    }
 }
}