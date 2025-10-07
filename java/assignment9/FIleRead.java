package com.java.assignment9;

import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.Scanner;

public class FileRead {

    static String path = "C:\\Users\\S21909\\eclipse-workspace99\\pracexam\\src\\com\\java\\assignment9\\Abc.txt";

    public static void main(String[] args) throws MyException {
        try {
            FileReader f = new FileReader(path);
            Scanner s = new Scanner(f);

            while (s.hasNext()) {
                try {
                    int nums = s.nextInt();

                    if (nums > 0) {
                     
                        throw new MyException("Exception Positive Number : " + nums);
                    } else {
                        
                        System.out.println("Negative : "+ nums);
                    }

                } catch (MyException e) {
                    
                    System.out.println(e.getMessage());
                }
            }

            s.close();
        } catch (FileNotFoundException e) {
            System.out.println("File not found: " + e.getMessage());
        }
    }
}
