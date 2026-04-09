package main 
import "fmt"
func main () {
	var x int
	fmt.Scan(&x)

	for i:=0; i<=x; i++ {
		fmt.Printf("%d ",fibonaci(i))
	}
}

func fibonaci(n int)int{
	if x <= 1 {
		return x
	}
	return fibonaci(x-1) + fibonaci(x-2)
}
