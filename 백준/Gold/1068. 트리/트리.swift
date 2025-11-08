import Foundation

func dfs(here: Int) -> Int {
    var leafCount = 0
    var validChildCount = 0
    
    for there in adj[here] {
        if there == r {
            continue
        }
        
        leafCount += dfs(here: there)
        validChildCount += 1
    }
    
    if validChildCount == 0 { return 1 }
    return leafCount
}

let n = Int(readLine()!)!
var root = 0

var adj = Array(repeating: [Int](), count: n)

let parents = readLine()!.split(separator: " ")
    .map { Int($0)! }

for i in 0..<n {
    let parent = parents[i]
    
    if parent == -1 {
        root = i
    } else {
        adj[parent].append(i)
    }
}

let r = Int(readLine()!)!

if r == root {
    print(0)
} else {
    print(dfs(here: root))
}
