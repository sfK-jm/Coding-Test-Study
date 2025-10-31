import Foundation

while true {
    
    var check = true
    var stk: [Character] = []
    
    let input = readLine()!
    if input == "." { break }
    
    
    for c in input {
        if c == ")" {
            if stk.isEmpty || stk.last == "[" {
                check = false
                break;
            } else {
                stk.removeLast()
            }
            
        }
        
        if c == "]" {
            if stk.isEmpty || stk.last == "(" {
                check = false
                break
            } else {
                stk.removeLast()
            }
        }
        
        if c == "(" {
            stk.append("(")
        }
        
        if c == "[" {
            stk.append("[")
        }
    }
    
    if check && stk.isEmpty {
        print("yes")
    } else {
        print("no")
    }

}
