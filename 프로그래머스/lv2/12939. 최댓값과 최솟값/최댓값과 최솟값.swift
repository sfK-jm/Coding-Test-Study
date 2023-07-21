func solution(_ s:String) -> String {
    // 입력된 문자열 리스트를 공백문자를 기준으로 분류
    let list = s.split(separator: " ")
    // 분류된 문자열 리스트를 숫자 배열로 전환
    let numbers = list.map{ Int($0)! }
    // 숫자 배열 중에서 가장 작은 숫자 정수를 찾음
    let min = numbers.min()!
    // 숫자 배열 중에서 가장 큰 숫자 정수를 찾음
    let max = numbers.max()!
        
    return "\(min) \(max)"
}