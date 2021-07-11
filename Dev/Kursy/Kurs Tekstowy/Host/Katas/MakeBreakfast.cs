using static System.Console;
using System;

namespace Oldschoolprogrammer.Katas.Breakfast
{
    public class Aliases
    {
        public static Exception NIE() => throw new NotImplementedException();
    }
    interface IBreakfast
    {
        public byte pch()
        {
            return 0;
        }

        public virtual void Make(string[] ingredients)
        {
            WriteLine("Making brekfast with ingredients:");
            foreach(var ing in ingredients) 
            {
                WriteLine(ing);
            }
        }
    }
    class Sandwich : IBreakfast
    {
        public Sandwich(bool bread, bool butter, bool ham, bool cheese, bool salad, bool cucumber)
        {
            this.bread.Is_use = bread;
            this.butter.Is_use = butter;
            this.ham.Is_use = ham;
            this.cheese.Is_use = cheese;

            // Basic ingredients
            if(this.bread.Is() == true) bread = this.bread.Is_use  = bread;
            if(this.butter.Is() == true) butter = this.butter.Is_use = butter;
            if(this.ham.Is() == true) ham = this.ham.Is_use = ham;
            if(this.cheese.Is() == true) cheese = this.cheese.Is_use = cheese;

            // Add-ons
            if(this.bread.Is() == true || this.butter.Is() == true || this.ham.Is() == true || this.cheese.Is() == true)
            {
                if(this.salad.Is() == true) salad = this.salad.Is_use = salad;
                if(this.cucumber.Is() == true) cucumber = this.cucumber.Is_use = cucumber;
            }
            
        } // ctor

        public override void Make(Ingredients[] ingredients)
        {
            WriteLine("Making sandwich with ingredients:");
            foreach(var ing in ingredients)
            {
                if(ing.Is()) WriteLine($"{ing.Name()}, ");
            }
        }
        // =================================
        public Salad salad;
        public Ham ham;
        public Cucumber cucumber;
        public Bread bread;
        public Cheese cheese;
        public Butter butter;
    }
    abstract class Ingredients
    {
        public virtual void NIE() => Aliases.NIE();
        public bool Is()
        {
            return Is_use;
        }
        public bool Is_use
        {
            get { return is_use; }
            set { is_use = value; }
        }
        public virtual string Name()
        {
            return name;
        }
        private bool is_use;
        private static string name = "ingredient";
    }
    class Bread : Ingredients
    {
        public Bread(bool is_use) => Is_use = is_use;
        public override string Name()
        {
            return name;
        }
        private static string name = "bread";
    }
    class Butter : Ingredients
    {
        public Butter(bool is_use) => Is_use = is_use;
    }
    class Ham : Ingredients
    {
        public Ham(bool is_use) => Is_use = is_use;
    }
    class Cheese : Ingredients
    {
        public Cheese(bool is_use) => Is_use = is_use;
    }
    class Salad : Ingredients
    {
        public Salad(bool is_use) => Is_use = is_use;
    }
    class Cucumber : Ingredients
    {
        public Cucumber(bool is_use) => Is_use = is_use;
    }
}
// TODO: ctor bedzie inicjowal is

/// Diagram:
/// IBreakfast -i-> Ingredients -i-> Bread, Butter, Ham, Salad, Cucumber, Cheese
/// i|                                ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
///  v                                  /f
/// Sandwich---------------------------/
/// i = inherits
/// f = field