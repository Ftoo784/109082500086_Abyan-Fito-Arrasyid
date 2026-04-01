package main

import "fmt"

func factorial(n int, hasil *int64) {
	*hasil = 1
	for i := 1; i <= n; i++ {
		*hasil *= int64(i)
	}
}

func permutation(n, r int, hasil *int64) {
	var fn, fnr int64
	factorial(n, &fn)
	factorial(n-r, &fnr)
	*hasil = fn / fnr
}

func combination(n, r int, hasil *int64) {
	var fn, fr, fnr int64
	factorial(n, &fn)
	factorial(r, &fr)
	factorial(n-r, &fnr)
	*hasil = fn / (fr * fnr)
}

func main() {
	var a, b, c, d int
	var p, k int64

	fmt.Scan(&a, &b, &c, &d)

	permutation(a, c, &p)
	combination(a, c, &k)
	fmt.Println(p, k)

	permutation(b, d, &p)
	combination(b, d, &k)
	fmt.Println(p, k)
}
