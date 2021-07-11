using Oldschoolprogrammer.Katas.Breakfast;
namespace Oldschoolprogrammer.Katas.Breakfast.Program
{
    class Program
    {
        public static void Main(string[] args)
        {
            Sandwich sandwich = new Sandwich(true, true, true, false, false, true);
            Ingredients[] ingreds = new Ingredients[6];
            ingreds[0] = sandwich.bread;
        }
    }
}