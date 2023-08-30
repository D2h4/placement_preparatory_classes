import java.util.*;
class MyString
{   String str1;
    String str2;
    MyString(String str1,String str2)
    {
    	this.str1=str1;
    	this.str2=str2;
    }
    void concateTwoString()
    {   
    	System.out.println(str1.concat(str2));
    }
    void convertLowerTwoString()
    {
    	System.out.println(str1.toLowerCase());
    }
    void convertUpperTwoString()
    {
    	System.out.println(str2.toUpperCase());
    }
    void isEquals()
    {
       System.out.println(str1.equals(str2));
    }
    void findLocation()
    {
    	System.out.println(str1.indexOf('j'));
    	System.out.println(str2.indexOf('j'));
    }
    void replaceCharacter()
    {
    	System.out.println(str1.replace('i','I'));
    	System.out.println(str2.replace('i','I'));
    }
    void displayWord()
    {   int i=str1.indexOf('j');
        System.out.println(str1.substring(i,i+4));
    }
    void diplayKthCharacter()
    {
    	System.out.println(str1.charAt(6));
    }
}
public class Class_Object_program2
{
   public static void main(String[] args)
   {
   	  String str1="Welcome to java class";
    String str2="Today's topic is string handling in java";
    MyString m=new MyString(str1,str2);
    m.concateTwoString();
    m.convertLowerTwoString();
    m.convertUpperTwoString();
    m.isEquals();
    m.findLocation();
    m.replaceCharacter();
    m.displayWord();
    m.diplayKthCharacter();
   }

}