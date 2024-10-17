using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

namespace ReadWriteCSV
{
    public class CsvRow : List<string>
    {
        public string LineText { get; set; }
    }

    public class CsvFileWriter : StreamWriter
    {
        public CsvFileWriter(Stream stream) : base(stream)
        {
        }

        public CsvFileWriter(string fileName) : base(FileHelper.CreateFileIfNotExists(fileName))
        {
        }

        // Writes a single row of CSV data
        public void WriteRow(CsvRow row)
        {
            StringBuilder sb = new StringBuilder();
            bool first = true;

            // Build the CSV row
            foreach (var item in row)
            {
                if (!first)
                {
                    sb.Append(","); // Add comma between columns, no space after the comma
                }

                // Escape double quotes and handle values that need to be quoted
                if (item.IndexOfAny(new char[] { '"', ',' }) != -1)
                    sb.AppendFormat("\"{0}\"", item.Replace("\"", "\"\""));
                else
                    sb.Append(item);

                first = false;
            }

            // Write the built CSV row to the file
            base.WriteLine(sb.ToString());
        }
    }
}
