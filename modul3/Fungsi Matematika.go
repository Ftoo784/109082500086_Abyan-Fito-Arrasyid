package main

import "fmt"

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)

	fmt.Println((a - 1) * (a - 1))
	fmt.Println(b*b - 1)
	fmt.Println((c-2)*(c-2) + 1)
}
