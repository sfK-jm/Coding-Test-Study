import Foundation

let n = Int(readLine()!)!

for _ in 0..<n {
    let input = Int(readLine()!)!
    var cnt5 = 0, i = 5
    
    while i <= input {
        cnt5 += input / i
        i *= 5
    }
    
    print(cnt5)
}
