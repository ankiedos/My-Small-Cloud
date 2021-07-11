(:;) :: Int -> Int -> Double
inifixl :; 0	-- jest left2right; wykona się na samym końcu
(:;) a b = read (show a) ++ "." ++ (show b))
main :: IO ()
main = do
	a <- getLine
	b <- getLine
	putStrLn ((read a) :; (read b)) -- funkcje mają największy (10) priorytet
{-
	double GetDouble(int a, int b)
	{
		return (double)(std::to_string(a) + "." + std::to_string(b));
	}
-}

toString :: a -> String
toString a = "" ++ a

inc :: (Num a) => a -> a
inc a = a + 1

dec :: (Num a) => a -> a
dec a = a - 1

add :: (Num a) => a -> a -> a
add a 0 = a
add 0 b = b
add a 1 = inc a
add 1 b = inc b
add a b = add (inc a) (b - 1)

sub :: (Num a) => a -> a -> a
sub a 0 = a
sub 0 b = -b
sub a 1 = dec a
sub 1 b = -b + 1
sub a b = add a + (-b)

mult :: (Num a) => a -> a -> a
mult _ 0 = 0
mult 0 _ = 0
mult a 1 = a
mult 1 a = a
mult a b = add a (mult a (b - 1))

div :: (Num a) => a -> a -> a
div _ 0 = error "div x 0"
div 0 _ = 0
div a 1 = a
div 1 a = 1 / a
div a b = mult a (div 1 b)

pow :: (Eq a, Eq b) => a -> a -> b
pow a b = |a /= 0 && b == 0 1
		  |a == 0 			0
		  |a == 1			1
		  |otherwise		mult a (pow a (b - 1))
data BinTree a = Leaf a | Branch a (BinTree a) (BinTree a)
tree :: BinTree Int
tree = Branch 6 ((Branch 5 (Leaf 4) (Leaf 6)) (Branch 7 (Leaf 6)(Leaf 8)))
{-
tree =
    6
   / \
  5   7
 / \ / \
4  6 6  8
-}