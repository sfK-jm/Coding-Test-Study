import Foundation

func check(_ s: String) -> Bool {
    
    var stk: [Character] = []
    
    for c in s {
        if c == "(" {
            stk.append(c)
        } else if c == ")" {
            if !stk.isEmpty {
                stk.removeLast()
            } else {
                return false
            }
        }
    }
    
    return stk.isEmpty
}

var n = Int(readLine()!)!

for _ in 0..<n {
    let input = readLine()!
    if check(input) {
        print("YES")
    } else {
        print("NO")
    }
}
