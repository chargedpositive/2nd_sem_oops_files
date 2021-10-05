package exp;
import java.io.*;
public class Exp {
public static void main(String[] args) throws IOException
	{
		File file1=new File("first.txt");	
		FileWriter fw1=new FileWriter(file1);
		fw1.write("A stream is a communication channel that a program has with the outside world. It is used to transfer data items in succession.");
		fw1.close();
		File file2=new File("second.txt");	
		FileWriter fw2=new FileWriter(file2);
		fw2.write("An Input/Output (I/O) Stream represents an input source or an output destination. A stream can represent many different kinds of sources and destinations, including disk files, devices, other programs, and memory arrays.");
		fw2.close();
		File file3=new File("final.txt");
		FileWriter fw3=new FileWriter(file3);
		BufferedReader br=new BufferedReader(new FileReader("first.txt"));
		String line=br.readLine();
		while(line!=null)
		{
			fw3.write(line);
			line=br.readLine();
		}
		br=new BufferedReader(new FileReader("second.txt"));
		line=br.readLine();
		while(line!=null)
		{
			fw3.write(line);
			line=br.readLine();
		}
		fw3.flush();
		br.close();
		fw3.close();
		System.out.println("file merge successfull!!!\n");
	}
}
