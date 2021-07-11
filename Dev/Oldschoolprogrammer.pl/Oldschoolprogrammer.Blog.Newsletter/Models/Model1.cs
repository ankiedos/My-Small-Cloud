using System;

namespace Oldschoolprogrammer.Blog.Newsletter.Models
{
    /// <summary>
    /// Model1 changes title to "TEST ASP.NET Core"...
    /// ...and creates new key in TempData -- TEST -- which is setting to "TEST".
    /// </summary>
    public class Model1
    {
        private string property;

        public string Property { get => property; set => property = value; }
        public Model1()
        {
            //TempData["TEST"] = "TEST";
            //ViewData["Title"] = "TEST ASP.NET Core";
            //
            // TODO: Add constructor logic here
            //
        }
    }
}