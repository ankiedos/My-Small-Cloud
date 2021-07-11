using System.Collections.Generic;
using System.IO;
using Oldschoolprogrammer.Blog.Newsletter.Models;
using Microsoft.AspNetCore.Hosting;

namespace Oldschoolprogrammer.Blog.Newsletter.Services
{
    public class JSONFileProductService
    {
        public JSONFileProductService(IWebHostEnvironment wHE)
        {
            WebHostEnv = wHE;
        }
        public IWebHostEnvironment WebHostEnv { get; }
        private string JSONFileName
        {
            get { return Path.Combine(WebHostEnv.WebRootPath, "data", "product.json"); }
        }
        //public IEnumerable<Product> GetProducts()
        //{
        //    using (var JSONFilereader = File.OpenText(JSONFileName))
        //    {
                //return JsonSerializer.Deserialize<Product[]>(JSONFilereader.ReadToEnd(),
                //    new JsonSerializerOptions
                //    {
                //        PropertyNameCaseInsensitive = true
                //    });
        //    }
        //}
    }
}