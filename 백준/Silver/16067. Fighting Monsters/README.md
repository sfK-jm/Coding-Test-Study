# [Silver II] Fighting Monsters - 16067 

[문제 링크](https://www.acmicpc.net/problem/16067) 

### 성능 요약

메모리: 12456 KB, 시간: 72 ms

### 분류

수학

### 제출 일자

2025년 8월 2일 21:47:26

### 문제 설명

<p>Emma just discovered a new card game called Gwint: A wizard’s game. There are two types of cards: monster cards and spell cards. Monster cards are used to score points, while spell cards typically interact with the monsters in some way.</p>

<p>On each monster card there is an integer value, the power of the monster. Monsters can fight each other, and during these fights the power acts as both the strength and the health of the monster. The monsters take turns hitting each other until one of them dies. Whenever a monster A hits a monster B, this causes B to lose an amount of power equal to the power of A. Conversely, if B hits A, A loses power equal to the power of B (see the example below). This continues until one of the two monsters has a power of zero or less, at which point this monster is considered dead.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/b8eaeb86-19b8-4727-b9c9-028919691b10/-/preview/" style="width: 231px; height: 251px;"></p>

<p style="text-align: center;">Images by <a href="https://pixabay.com/de/users/OpenClipart-Vectors-30363/">OpenClipart-Vectors</a> on Pixabay and from <a href="https://github.com/break24/PhantomOpenEmoji">PhantomOpenEmoji</a>.</p>

<p style="text-align: center;">Figure F.1: A fight between monsters A and B, starting with powers of 4 and 7, respectively. A hits first. B wins with a remaining power of 2.</p>

<p>One of Emma’s most beloved cards in the game is a spell called Fight! which states:</p>

<blockquote>
<p>Pick two monsters. They fight each other to the death. If the surviving monster has a power of exactly 1 left, return this card to your hand.</p>
</blockquote>

<p>Of course, Emma would like to play as efficiently as possible by picking two monsters such that Fight! is returned to her hand. However, there are often a lot of monsters on the board, which makes it very time consuming to figure out whether this can be done or not. Can you help her find two monsters she can pick so that she gets the card back?</p>

### 입력 

 <p>The input consists of:</p>

<ul>
	<li>one line with an integer n (2 ≤ n ≤ 10<sup>5</sup>), the number of monsters;</li>
	<li>one line with n integers m<sub>1</sub>, . . . , m<sub>n</sub> (1 ≤ m<sub>i</sub> ≤ 10<sup>6</sup>), giving the power of each monster.</li>
</ul>

### 출력 

 <p>If there is no pair of monsters that Emma can pick, output impossible. Otherwise, output two distinct integers i, j (1 ≤ i, j ≤ n), where i is the index of the monster that starts the fight and j is the index of the other monster. If multiple solutions exist, any of them will be accepted.</p>

