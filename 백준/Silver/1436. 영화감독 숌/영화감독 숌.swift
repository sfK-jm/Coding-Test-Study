import Foundation

var n = Int(readLine()!)!

func go(_ n: Int) -> Int {
    var cnt = 0
    var num = 0
    
    while cnt != n {
        num += 1
        var temp = num
        
        while temp >= 666 {
            if temp % 1000 == 666 { cnt += 1; break }
            else { temp /= 10 }
        }
        
    }
    return num
}

print(go(n))
