import Foundation

let input = readLine()!.split(separator: " ")
    .map({ Int($0)! })

let n = input[0]
let m = input[1]

var houses: [(r: Int, c: Int)] = []
var chickens: [(r: Int, c: Int)] = []

for r in 0..<n {
    let row = readLine()!.split(separator: " ").map({ Int($0)! })
    for c in 0..<n {
        if row[c] == 1 { houses.append((r, c)) }
        if row[c] == 2 { chickens.append((r, c)) }
    }
}

var distTable = Array(repeating: [Int](), count: houses.count)

for (hIdx, house) in houses.enumerated() {
    for chicken in chickens {
        let dist = abs(house.r - chicken.r) + abs(house.c - chicken.c)
        distTable[hIdx].append(dist)
    }
}

var result = Int.max
var visited = Array(repeating: false, count: chickens.count)

func dfs(index: Int, count: Int) {
    if count == m {
        var currentCityDist = 0
        
        for hIdx in 0..<houses.count {
            var minHouseDist = Int.max
            
            for cIdx in 0..<chickens.count {
                if visited[cIdx] {
                    let d = distTable[hIdx][cIdx]
                    if d < minHouseDist {
                        minHouseDist = d
                    }
                }
            }
            currentCityDist += minHouseDist
            
            if currentCityDist >= result { return }
        }
        
        if currentCityDist < result {
            result = currentCityDist
        }
        return
    }
    
    for i in index..<chickens.count {
        visited[i] = true
        dfs(index: i + 1, count: count + 1)
        visited[i] = false
    }
}

dfs(index: 0, count: 0)
print(result)
