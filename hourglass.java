import java.util.*;
class main {
    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
         int r = sc.nextInt();
         for(int i=r;i>=1;i--)
         {
             for(int k=1;k<=r-i;k++)
             {
                 System.out.print(" ");
             }
             for(int j=1;j<=2*i-1;j++)
             {
                 
                 System.out.print("*");
                 
             }
             System.out.println();
         }
         for(int i=1;i<=r;i++)
         {
             for(int k=1;k<=r-i;k++)
             {
                 System.out.print(" ");
             }
             for(int j=1;j<=2*i-1;j++)
             {
                 
                 System.out.print("*");
                 
             }
             System.out.println();
         }
    }
}