import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner s=new Scanner(System.in);
		try {
		    int t=s.nextInt();
		    for(int i=0;i<t;i++)
		    {
		        int n=s.nextInt();
		        String str=s.next();
		        int count=0;
		        for(int j=1;j<n;j++)
		        {
		            if((str.charAt(j)=='a')||(str.charAt(j)=='e')||(str.charAt(j)=='i')||(str.charAt(j)=='o')||(str.charAt(j)=='u'))
		            {
		                if((str.charAt(j-1)!='a')&&(str.charAt(j-1)!='e')&&(str.charAt(j-1)!='i')&&(str.charAt(j-1)!='o')&&(str.charAt(j-1)!='u'))
    		            {
    		                count++;
    		            }
		            }
		        }
		        System.out.println(count);
		    }
		    
		} catch(Exception e) {
		}
	}
}
