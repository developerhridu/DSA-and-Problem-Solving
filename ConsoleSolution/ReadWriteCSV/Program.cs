using System;
using IronXL;
using System.Data;
using ReadWriteCSV;

class Program
{
    static void Main(string[] args)
    {
        string fileName = "Test.csv";
        //WriteTest(fileName);
        //ReadTest(fileName);
        ExportToExcel(fileName);
    }


    #region ReadWriteByDefault
    static void WriteTest(string filename)
    {
        using (CsvFileWriter writer = new CsvFileWriter(filename))
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

    static void ReadTest(string filename)
    {

        using (CsvFileReader reader = new CsvFileReader(filename))
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
    #endregion ReadWriteByDefault

    #region IronXL
    public static void ExportToExcel(string filepath)
    {
        DataTable table = new DataTable();
        table.Columns.Add("DataSet_Animals", typeof(string));
        table.Rows.Add("Lion");
        table.Rows.Add("Tiger");
        table.Rows.Add("Leopard");
        table.Rows.Add("Cheetah");
        table.Rows.Add("Hyenas");
        var workbook = WorkBook.Create(ExcelFileFormat.XLS);
        var writer = workbook.DefaultWorkSheet;
        int rowCount = 1;
        foreach (DataRow row in table.Rows)
        {
            writer["A" + (rowCount)].Value = row[0].ToString();
            rowCount++;
        }
        workbook.SaveAsCsv(filepath, ";");
        //or 
        var stream = workbook.ToStream();
    }

    #endregion IronXL

}
