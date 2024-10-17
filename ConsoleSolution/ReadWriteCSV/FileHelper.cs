using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ReadWriteCSV
{
    public static class FileHelper
    {
        public static string CreateFileIfNotExists(string fileName)
        {
            if (!File.Exists(fileName))
            {
                using (File.Create(fileName)) { }
            }
            return fileName;
        }
    }
}
