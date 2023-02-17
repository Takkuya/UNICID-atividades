import java.util.Scanner;

public class Ex01 {

 public static void main(String[] args) {
  // TODO Auto-generated method stub  
   Scanner sc = new Scanner(System.in);
   
   System.out.println("Insira o seu primeiro nome:");
   String firstName = sc.nextLine();
   
   System.out.println("Insira o seu segundo nome");
   String secondName = sc.nextLine();
   
   System.out.println("Insira o seu terceiro nome:");
   String thirdName = sc.nextLine();
      
      System.out.println(firstName + " " + thirdName);
      System.out.println(secondName);
 }

}