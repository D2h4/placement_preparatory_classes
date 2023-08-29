import java.util.*;
class RemoveDuplicates
{
	public void isRemoveDuplicate()
	{
           int arr[]=new int[100];
           System.out.println("enter the size of array: ");
           Scanner sc=new Scanner(System.in);
           int n=sc.nextInt();
           System.out.println("enter the elements of array: ");
           for(int i=0;i<n;i++)
           {
           	  arr[i]=sc.nextInt();
           }
          //logic for removing duplicate...........
            int count=1;
           for(int i=0;i<n;i++)
           {
           	  if(arr[i]!=arr[i+1] )
           	  {
           	  	 arr[count]=arr[i+1];
           	  	 count++;
           	  }
           }
           System.out.println("After Removing Duplicate elements |Array:");
           for(int i=0;i<n;i++)
           { 
           	 if(arr[i]==0)
           	 	break;
           	 System.out.print(arr[i]+" ");
           }
	}
}
public class RemoveDuplicateSortedArray
{
	public static void main(String args[])
	{
		RemoveDuplicates r=new RemoveDuplicates();
		r.isRemoveDuplicate();
	}
}