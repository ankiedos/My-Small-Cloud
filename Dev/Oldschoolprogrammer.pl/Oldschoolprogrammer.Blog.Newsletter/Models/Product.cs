using System;
//using System.Text.Json;

namespace Oldschoolprogrammer.Blog.Newsletter.Models
{
    /// <summary>
    /// Class Product represents products.json file
    /// </summary>
    public class Product
    {
        public string ID { get; set; }

        public string Maker { get; set; }

        //[JsonPropertyName("img")]
        public string Image { get; set; }

        public string Url { get; set; }

        public string Title { get; set; }

        public string Description { get; set; }

        public int[] Ratings { get; set; }


        //public override string ToString() => JsonSerializer.Serialize<Product>(this);
    }
}