import java.util.*;

class fibo{
    
    public static void main(String[]args){

        Scanner input = new Scanner(System.in);
        
        System.out.println("How many number will output : ");
        int value = input.nextInt();

        int n1 = 0;
        int n2 = 1;
        int n3 = 1;

        for (int i = 0;i < value;i++){
            System.out.print(n3 + " ");
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
    }
}