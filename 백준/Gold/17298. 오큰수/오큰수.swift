import Foundation

let n = Int(readLine()!)!

var ret: [Int] = Array(repeating: -1, count: n)
var stk: [Int] = []
var a = readLine()!.split(separator: " ").map{ Int($0)! }

for i in 0..<n {
    while let topIndex = stk.last, a[topIndex] < a[i] {
        ret[topIndex] = a[i]
        stk.popLast()
    }
    stk.append(i)
}

print(ret.map{ String($0) }.joined(separator: " "))
