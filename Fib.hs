fib :: Integer -> Integer
fib x = if (x <= 2) then 1
        else fib (x - 2) + fib (x - 1)

main :: IO()
main = do
       c <- getLine
       let arra = [fib(i) | i <- [1..( read c :: Integer )]]
       print(arra)
