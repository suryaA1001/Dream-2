import java.util.*;
class main {
    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
         int r = sc.nextInt();
         int c = sc.nextInt();
         for(int i=1;i<=r;i++)
         {
             for(int j=1;j<=i;j++)
             {
                 
                 System.out.print("*");
                 
             }
             for(int k=1;k<=(2*r)-2*i;k++)
             {
                 
                 System.out.print(" ");
                 
             }
             for(int h=1;h<=i;h++)
             {
                 System.out.print("*");
             }
            
             System.out.println();
         }
         for(int i=r-1;i>=1;i--)
         {
             for(int j=1;j<=i;j++)
             {
                 
                 System.out.print("*");
                 
             }
             for(int k=1;k<=(2*r)-2*i;k++)
             {
                 
                 System.out.print(" ");
                 
             }
             for(int h=1;h<=i;h++)
             {
                 System.out.print("*");
             }
            
             System.out.println();
         }
    }
}