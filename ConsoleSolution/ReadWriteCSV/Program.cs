using System;
using ReadWriteCSV;

class Program
{
    static void Main(string[] args)
    {
        //WriteTest();
        ReadTest();
    }

    static void WriteTest()
    {
        // Write sample data to CSV file
        using (CsvFileWriter writer = new CsvFileWriter("Test.csv"))
        {
            for (int i = 0; i < 10; i++)
            {
                CsvRow row = new CsvRow();
                for (int j = 0; j < 5; j++)
                    row.Add($"Column{j}_{i}"); 
                writer.WriteRow(row);
            }
        }
    }

    static void ReadTest()
    {
        // Read sample data from CSV file
        using (CsvFileReader reader = new CsvFileReader("Test.csv"))
        {
            CsvRow row = new CsvRow();
            while (reader.ReadRow(row))
            {
                foreach (string s in row)
                {
                    Console.Write(s + " ");
                }
                Console.WriteLine();
            }
        }
    }
}
