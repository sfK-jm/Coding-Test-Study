import Foundation

let input = readLine()
let n = Int(input!)!

func fibonacci(_ n: Int) -> Int {
    
    if n <= 1 { return n }
    return fibonacci(n - 1) + fibonacci(n - 2)
}

print(fibonacci(n))