import Foundation

var size = readLine()!.split(separator: " ")
    .map { Int($0)! }

let h = size[0]
let w = size[1]

var a: [[Int]] = (0..<h).map { _ in
    
    return readLine()!.map { (char: Character) -> Int in
        return char == "c" ? 0 : -1
    }
}

for i in 0..<h {
    var cloudTimer = -1
    
    for j in 0..<w {
        if a[i][j] == 0 {
            cloudTimer = 0
        } else if cloudTimer != -1 {
            cloudTimer += 1
            a[i][j] = cloudTimer
        }
    }
}

a.forEach { row in
    let line = row.map { String($0) }
        .joined(separator: " ")
    print(line)
}
